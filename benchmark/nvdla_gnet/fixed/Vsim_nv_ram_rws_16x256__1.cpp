// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_04));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_05) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_05)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_05))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_05))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_05))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_05))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_05));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_05));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_06) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_06)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_06))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_06))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_06))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_06))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_06));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_06));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_07) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_07)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_07))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_07))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_07))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_07))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_07));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_07));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_08) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_08)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_08))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_08))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3657) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_08))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_08))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_08));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_08))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_08))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_08))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_08));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_09) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_09)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_09))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_09))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3657) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_09))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_09))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_09));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_09))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_09))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_09))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_09));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_10) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_10)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_10))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_10))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3657) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_10))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_10))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_10));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_10))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_10))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_10))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_10));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_11) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_11)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_11))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_11))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3657) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_11))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_11))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_11));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_11))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_11))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_11))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_11));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_12) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_12)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_12))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_12))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3656) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_12))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_12))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_12));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_12))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_12))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_12))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_12));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_13) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_13)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_13))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_13))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3656) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_13))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_13))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_13));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_13))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_13))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_13))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_13));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_14) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_14)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_14))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_14))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3656) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_14))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_14))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_14));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_14))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_14))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_14))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_14));
}

void Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__2(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_15) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_15)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__4(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_15))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_15))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                                        | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3656) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_15))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_15))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__7(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_15));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__8(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0)
                               : 0U) : ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                                          & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                                         | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                                            & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                                        | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                            | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                           | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                                               & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                              | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1)))))));
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__9(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_15))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_15))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_15))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
    }
}

void Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__10(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_15));
}

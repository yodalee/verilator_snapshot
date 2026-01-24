// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*7:0*/, 512> Vsim__ConstPool__TABLE_h0c7bd8f6_0;

void Vsim___024root___nba_comb__TOP__407(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__407\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7;
    tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7 = 0;
    SData/*8:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    VlWide<4>/*127:0*/ __Vtemp_46;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_34 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_33) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__line_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__line_cnt) 
            == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_width_cur_latch)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__last_c));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__7__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__6__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__5__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__4__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__1__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_read_en) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_prdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__fp16_out_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__fp16_mean_pool_cfg) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_data_pad_rdy 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__fp16_mean_pool_cfg)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_pout_data_en 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_wr_stage2) 
               & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last_2d))) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_30)));
    if ((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
          | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) 
         | (((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
             | (8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) 
            | ((0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
               | ((0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
                  | ((0x40U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
                     | (0x80U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)))))))) {
        if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_0[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_0[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_0[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data0[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_0[3U]);
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data1[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_1[3U]);
        } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_2[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_2[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_2[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_2[3U]);
        } else if ((8U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_3[3U]);
        } else if ((0x10U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_4[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_4[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_4[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_4[3U]);
        } else if ((0x20U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_5[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_5[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_5[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_5[3U]);
        } else if ((0x40U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_6[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_6[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_6[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data6[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_6[3U]);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_7[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_7[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_7[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
                = ((0x00070000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7[3U]) 
                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_2d_result_7[3U]);
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_line_out_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_line_end_2d) 
           & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last 
        = ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_41) 
                 & ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_40) 
                           & ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                          << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_39) 
                                       & ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_37) 
                                                & ((4U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))))) 
             << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_36) 
                          & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                         << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_35) 
                                    & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                                   << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_33) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_cnt_pooling_last_2d)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))) 
                                               << 1U) 
                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_115) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))))) 
           | ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_41) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_110)) 
                   << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_40) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_110)) 
                             << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_39) 
                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_111)) 
                                         << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_37) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_111)))) 
                << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_36) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_112)) 
                            << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_35) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_112)) 
                                      << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_34) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_115) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel))))) 
              | (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_41) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_113)) 
                     << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_40) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_113)) 
                               << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_39) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_113)) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_37) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_113)))) 
                  << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_36) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_114)) 
                              << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_35) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_114)) 
                                        << 2U)) | (
                                                   (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_34) 
                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_115) 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bubble_en_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bubble_cnt) 
            == (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bubble_num_use) 
                      - (IData)(1U)))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__line_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_29 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__3__KET__) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_28 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__2__KET__) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_27 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__1__KET__) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_26 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__1__KET__) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_25 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__0__KET__) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_24 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__0__KET__) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_done 
        = ((0x3fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__cur_datin_disable) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__one_width_norm_rdy))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_29 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_21 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__3__KET__) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_19 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__2__KET__) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_16 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__1__KET__) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stripe_receive_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__c_cnt)));
    tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__0__KET__) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__load_din));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_actv_out_prdy 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__fp16_mean_pool_cfg)
                  ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                     & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                        & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                 & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                    & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                       & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld))))))))
                  : ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_data_pad_vld)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling1d_data_pad_rdy))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_sub_lbuf_end 
        = (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel)) 
            & (0x3fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_line_out_cnt))) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_line_out_done));
    __Vtemp_46[0U] = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data1_lst[0U] 
                       & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                           >> 1U))))) 
                      | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2_lst[0U] 
                          & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                              >> 2U))))) 
                         | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3_lst[0U] 
                             & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                 >> 3U))))) 
                            | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4_lst[0U] 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                               >> 4U))))) 
                               | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5_lst[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                    >> 5U))))) 
                                  | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data6_lst[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                       >> 6U))))) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7_lst[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                         >> 7U)))))))))));
    __Vtemp_46[1U] = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data1_lst[1U] 
                       & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                           >> 1U))))) 
                      | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2_lst[1U] 
                          & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                              >> 2U))))) 
                         | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3_lst[1U] 
                             & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                 >> 3U))))) 
                            | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4_lst[1U] 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                               >> 4U))))) 
                               | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5_lst[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                    >> 5U))))) 
                                  | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data6_lst[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                       >> 6U))))) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7_lst[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                         >> 7U)))))))))));
    __Vtemp_46[2U] = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data1_lst[2U] 
                       & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                           >> 1U))))) 
                      | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2_lst[2U] 
                          & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                              >> 2U))))) 
                         | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3_lst[2U] 
                             & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                 >> 3U))))) 
                            | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4_lst[2U] 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                               >> 4U))))) 
                               | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5_lst[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                    >> 5U))))) 
                                  | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data6_lst[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                       >> 6U))))) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7_lst[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                         >> 7U)))))))))));
    __Vtemp_46[3U] = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data1_lst[3U] 
                       & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                           >> 1U))))) 
                      | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2_lst[3U] 
                          & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                              >> 2U))))) 
                         | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3_lst[3U] 
                             & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                 >> 3U))))) 
                            | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data4_lst[3U] 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                               >> 4U))))) 
                               | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data5_lst[3U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                    >> 5U))))) 
                                  | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data6_lst[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                       >> 6U))))) 
                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data7_lst[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last) 
                                                         >> 7U)))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[0U] 
        = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data0_lst[0U] 
            & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last))))) 
           | __Vtemp_46[0U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[1U] 
        = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data0_lst[1U] 
            & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last))))) 
           | __Vtemp_46[1U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[2U] 
        = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data0_lst[2U] 
            & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last))))) 
           | __Vtemp_46[2U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[3U] 
        = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data0_lst[3U] 
            & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_sel_last))))) 
           | __Vtemp_46[3U]);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last 
        = ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__1__KET__) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_118)) 
                << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__1__KET__) 
                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_119)) 
                          << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_27) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel_last)) 
                                      << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_26) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel_last)))) 
             << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__0__KET__) 
                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_118)) 
                         << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__0__KET__) 
                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_119)) 
                                   << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_25) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel_last)) 
                                               << 1U) 
                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_24) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel_last))))) 
           | ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__3__KET__) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_117)) 
                   << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_29) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last)) 
                             << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__2__KET__) 
                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_117)) 
                                         << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_28) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last)))) 
                << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_27) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last)) 
                            << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_26) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last)) 
                                      << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_25) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_24) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel_last))))) 
              | (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__7__KET__) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_116)) 
                     << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__6__KET__) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_116)) 
                               << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__5__KET__) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_116)) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en_last__BRA__4__KET__) 
                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_116)))) 
                  << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_29) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel_last)) 
                              << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_28) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel_last)) 
                                        << 2U)) | (
                                                   (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_26) 
                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel_last)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_24) 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel_last)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__last_sub_lbuf_done 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank_merge_num) 
             - (IData)(1U)) == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_done));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_22 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_21) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_20 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_19) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_18 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_16) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_17 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_16) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_15 
        = ((IData)(tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7) 
           & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_13 
        = ((IData)(tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_11 
        = ((IData)(tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_9 
        = ((IData)(tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_info_out_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_actv_out_prdy) 
           & (0x000000ffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_pvld)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_comb_lbuf_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_sub_lbuf_end) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_sub_lbuf_cnt) 
               == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank_merge_num) 
                   - (IData)(1U)))) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_line_out_done));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_data[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[0U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[0U] 
               | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[1U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[1U] 
               | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[2U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[2U] 
               | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data[3U] 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_act[3U] 
               | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_data_last[3U]);
    }
    __Vtableidx65 = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_9) 
                         << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_11) 
                                    << 3U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_13) 
                                              << 2U))) 
                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_15) 
                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re1_sel))) 
                      << 4U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt) 
                                 << 1U) | (IData)(tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_7)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re1 
        = Vsim__ConstPool__TABLE_h0c7bd8f6_0[__Vtableidx65];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_lbuf_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_comb_lbuf_cnt) 
            == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__buffer_lines_num) 
                - (IData)(1U))) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__rd_comb_lbuf_end) 
                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__last_active_line_2d)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re1) 
           | ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_16) 
                    & ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel))) 
                   << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_16) 
                              & ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__wr_sub_lbuf_cnt)) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel))) 
                             << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_18) 
                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)) 
                                         << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_17) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)))) 
                << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_15) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)) 
                            << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_13) 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)) 
                                      << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_11) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_9) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re2_sel))))) 
              | ((((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_21) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_125)) 
                      << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_22) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)) 
                                << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_19) 
                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_125)) 
                                            << 1U) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_20) 
                                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)))) 
                   << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_18) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)) 
                               << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_17) 
                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)) 
                                         << 2U)) | 
                             ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_11) 
                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel)) 
                               << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_9) 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re3_sel))))) 
                 | (((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__7__KET__) 
                         & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_29)) 
                        << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__6__KET__) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_29)) 
                                  << 2U)) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__5__KET__) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_29)) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__unit2d_en__BRA__4__KET__) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_29)))) 
                     << 4U) | (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_22) 
                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel)) 
                                 << 3U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_20) 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel)) 
                                           << 2U)) 
                               | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_17) 
                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_9) 
                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re4_sel))))))));
}

void Vsim___024root___nba_comb__TOP__408(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__408\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pdp_dp2wdma_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__p1_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__409(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__409\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_here 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_size_v_use) 
              != (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_height))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_height) 
                 - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pout_mem_size_v_use)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_out 
        = ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
            ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_7x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_6x_cfg)
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_5x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_4x_cfg))
            : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_3x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_2x_cfg)
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_1x_cfg
                    : 0U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169 = (0x007fffffU 
                                                  & VL_MULS_III(23, 
                                                                (0x007fffffU 
                                                                 & VL_EXTENDS_II(23,19, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_out)), 
                                                                (0x007fffffU 
                                                                 & VL_EXTENDS_II(23,5, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (7U 
                                                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_width))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 = (0x0000ffffU 
                                                  & VL_EXTENDS_II(16,15, 
                                                                  ((0x00004000U 
                                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169 
                                                                       << 1U)) 
                                                                   | (0x00003fffU 
                                                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169))));
}

void Vsim___024root___nba_comb__TOP__410(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__410\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__padding_here 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d)) 
           & ((7U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_actv_out[2U] 
                     >> 0x00000018U)) != (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_width))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_width) 
                 - ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_actv_out[2U] 
                     << 8U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_actv_out[2U] 
                               >> 0x00000018U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__padding_here_int16 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__padding_here) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_input_data_d)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__padding_here_int8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__padding_here) 
           & (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_input_data_d)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_out 
        = ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
            ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_7x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_6x_cfg)
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_5x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_4x_cfg))
            : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_3x_cfg
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_2x_cfg)
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_index))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_pad_value_1x_cfg
                    : 0U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = (0x007fffffU 
                                                  & VL_EXTENDS_II(23,20, 
                                                                  ((0x00080000U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_out 
                                                                       << 1U)) 
                                                                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_out)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141 = (0x00001fffU 
                                                  & VL_EXTENDS_II(13,12, 
                                                                  ((0x00000800U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_out 
                                                                       << 1U)) 
                                                                   | (0x000007ffU 
                                                                      & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pad_table_out))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h6b1ffa98_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsim__ConstPool__TABLE_hc7f08a4f_0;

void Vsim___024root___nba_sequent__TOP__1489(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1489\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_pad_top;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_kernel_stride_height;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__datin_src_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_flying_mode;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_pad_top;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_kernel_stride_height;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__datin_src_cfg 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_flying_mode;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_in_precision 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_in_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_deconv_x_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_datain_width;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_rubik_mode 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_rubik_mode;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_in_precision 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_in_precision;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_deconv_x_stride;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_datain_width;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_rubik_mode 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_rubik_mode;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__h_pt 
        = (0x0000000fU & ((7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_cube_in_height)) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_stride_num 
        = (7U & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg)
                  : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))
                      ? VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg), 1U)
                      : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))
                          ? ((6U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg))
                              ? 2U : ((3U <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg))
                                       ? 1U : 0U)) : 
                         (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg) 
                           > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))
                           ? 1U : 0U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_5x 
        = (0x000000ffU & ((0x0000007cU & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                          << 2U)) + 
                          (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x 
        = (0x0000007fU & ((0x0000003eU & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                          << 1U)) + 
                          (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2sdp_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__sdp_req_pvld));
    __Vtableidx7 = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_dx_stride_num_c 
        = Vsim__ConstPool__TABLE_h6b1ffa98_0[__Vtableidx7];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dx_stride_num 
        = Vsim__ConstPool__TABLE_hc7f08a4f_0[__Vtableidx7];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_grp_num 
        = (0x00000fffU & ((0x000007ffU & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width)) 
                                          >> 3U)) + 
                          (0U != (7U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inwidthm 
        = (0x000007ffU & ((0x000007ffU & (((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width)) 
                                          >> 3U)) + 
                          (0U != (7U & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_width))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d2 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_sel;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d1 = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_sel_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__csb2cacc_req_src_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cacc_req_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cdp_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000f000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__small_active 
        = ((~ (0U != (0x000003ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_cube_in_height) 
                                     >> 3U)))) & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__h_pt) 
                                                  < 
                                                  (7U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_height))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159 = (0x000001ffU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_stride_num) 
                                                     * 
                                                     (0x0000001fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_6x 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__small_active) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 
            = (0x0000001fU & (0x0000000fU & ((IData)(1U) 
                                             + (7U 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__reg2dp_cube_in_height)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain 
            = (0x0000003fU & ((0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__h_pt) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg))) 
                              - (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_height))));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 
            = (0x0000001fU & ((0x0000000fU & ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_kernel_height)))) 
                              - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__padding_v_cfg)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_num_cal 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
            < (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))))
            ? 0U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                     < (0x0000003eU & (((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                       << 1U))) ? 1U
                     : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                         < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x))
                         ? 2U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                                  < (0x0000007cU & 
                                     (((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                      << 2U))) ? 3U
                                  : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                                      < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_5x))
                                      ? 4U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                                               < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_6x))
                                               ? 5U
                                               : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__reg2dp_pad_bottom_cfg) 
                                                   < 
                                                   (0x000000ffU 
                                                    & ((0x0000007cU 
                                                        & (((IData)(1U) 
                                                            + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                                           << 2U)) 
                                                       + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x))))
                                                   ? 6U
                                                   : 7U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__sdp_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x0000b000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__cacc_req_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_req_int) 
               & (0x00009000U == (0x0003f000U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__NV_AFIFO_rd_data) 
                                                 << 2U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_num 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_num_cal))
            ? 0U : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__small_active)
                     ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                         == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_6x))
                         ? 6U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_5x))
                                  ? 5U : (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                                           == (0x0000007cU 
                                               & (((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                                  << 2U)))
                                           ? 4U : (
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__stride_3x))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                                                     == 
                                                     (0x0000003eU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg)) 
                                                         << 1U)))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_r_remain) 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pooling_stride_v_cfg))))
                                                      ? 1U
                                                      : 0U))))))
                     : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__flush_num_cal)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_RT_csc2cmac_a__DOT__sc2mac_wt_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__sc2mac_wt_a_src_pvld));
}

void Vsim___024root___nba_comb__TOP__411(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__411\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__ra_lat];
}

void Vsim___024root___nba_comb__TOP__412(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__412\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__pre_muxed_Di_w0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                 << 0x0000000aU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 9U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                               << 8U))) 
               | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                   << 7U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                              << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                         << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__dma_rsp_w_burst_size)))))
            : 0U);
}

void Vsim___024root___nba_sequent__TOP__1490(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1490\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim___024root___nba_sequent__TOP__1491(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1491\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_busy_in)) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_req))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_data_in 
            = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_planar_d1) 
                 << 0x0000000aU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_end_d1) 
                                     << 9U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_line_end_d1) 
                                               << 8U))) 
               | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_bundle_end_d1) 
                   << 7U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_line_st_d1) 
                              << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_is_dummy_d1) 
                                         << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__req_size_d1)))));
    } else if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_busy_in)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_req))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_data_in = 0U;
    }
}

void Vsim___024root___nba_comb__TOP__413(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__413\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__cmux2dp_pvld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__pipe_p2__DOT__p2_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__414(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__414\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc2sdp_ready)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc2sdp_ready) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end_d3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d2 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d3)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc2sdp_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel_w 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__cacc_done)
                  ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel))
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__intr_sel)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d2_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d2)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d1 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d2)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d1_reg_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1_w 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d1)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_valid_d1)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready_d1)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_ready) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en 
            = (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in 
            = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt) 
                              >> 3U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in 
            = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_d1));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_d1;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl_w 
        = (0x000001ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_data_avl_add)) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_d0_reg_en) 
           & ((((0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dbuf_rd_addr_cnt) 
                                >> 3U)) == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_addr)) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en) 
                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_mask))) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_vld)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_567 = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_layer_end)) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_ctrl__DOT__dlv_end_tag0_vld));
}

void Vsim___024root___nba_sequent__TOP__1492(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1492\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__dp2reg_done 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dat_accept) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_cube_end) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__is_last_beat))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__beat_count) 
           == (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_size) 
                              >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2692 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_size)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__is_last_beat));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd2dat_dma_pvld) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd2dat_dma_prdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_cube_end 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd2dat_dma_pd[2U] 
                         >> 9U));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd2dat_dma_pvld) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cmd2dat_dma_prdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_cube_end = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_cube_end = 0U;
    }
}

void Vsim___024root___nba_comb__TOP__415(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__415\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_wg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_wg) 
           == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                ? 3U : 0U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_batch 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_batch));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line) 
                 + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_pack) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_587 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_588 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_587 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__mode_8to16_flag_twin)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_588 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__mode_8to16_flag_twin));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dma_wr_cmd_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dma_wr_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dat_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dat_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__dma_wr_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_e) 
              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__dp2reg_done)
            ? 0U : ((6U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_op_en_ori)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U))) 
                     & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0.reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_consumer)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__dp2reg_done))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((0x0038U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U))) 
                     & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1.reg_wr_en)))
                  ? (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                             >> 0x00000016U)) : ((~ 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__dp2reg_done) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_consumer))) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__cfg_mode_8to16) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_en 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_587));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_en 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_587));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo2_wr_en 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_588));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo3_wr_en 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_588));
    } else if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_en 
            = (1U & (0U == (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_en 
            = (1U & (1U == (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo2_wr_en 
            = (1U & (2U == (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo3_wr_en 
            = (1U & (3U == (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_en 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_en 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo2_wr_en 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo3_wr_en 
            = (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__beat_count));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_reg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en) 
           ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_set 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en_w)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_clr 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_reg 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en) 
           ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_set 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en_w)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_clr 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en_w));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_ftrans 
            = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_w)) 
               | (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_w)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__fifo_bank1_en 
            = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_odd)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_pack)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_width 
            = (0x00003fffU & ((IData)(1U) + (0x3ffeU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width) 
                                                + (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line)) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset))))))));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_ftrans 
            = (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_w));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__fifo_bank1_en 
            = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd) 
                     | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                         ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_out__DOT__cmd_odd))
                         : (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2692)))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_width 
            = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                               ? (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width) 
                                                 >> 1U))
                               : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                                   ? (0x00000fffU & 
                                      (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width) 
                                        + ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line)) 
                                           + (1U & 
                                              (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset))))) 
                                       >> 1U)) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width))));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT____VdfgRegularize_hc7d7fe30_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_w) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_width));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT____VdfgRegularize_hc7d7fe30_0_0) 
               | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_w) 
                  == ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_width) 
                      - (IData)(1U)))) : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT____VdfgRegularize_hc7d7fe30_0_0));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_set) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__stl_cnt_cur;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__cvt_sat_cvt_sat_cnt_cur;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__nan_output_cnt;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_status_unequal;
    } else {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_clr) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num_w = 0U;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal_w 
            = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_clr)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal));
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_set) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num_w = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif__DOT__stl_cnt_cur;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__cvt_sat_cvt_sat_cnt_cur;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__nan_output_cnt;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal_w 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_status_unequal;
    } else {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_clr) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation_w = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num_w = 0U;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal_w 
            = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_clr)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_line_end 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch) 
                 | ((~ ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number)) 
                        | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd) 
                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)))) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_batch) 
                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end) 
                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_w) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_wg)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_ftrans) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_surf_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_line_end) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_h) 
                 == (0x00001fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                                     ? VL_SHIFTR_III(13,13,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_height), 2U)
                                     : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_height))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__spt_fifo_pd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd) 
            << 0x0000000eU) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch)
                                ? (0x000001ffU & ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision)))
                                                   ? 
                                                  (1U 
                                                   | (0x000001feU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_channel) 
                                                         >> 4U)))
                                                   : 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_channel) 
                                                   >> 4U)))
                                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                                    ? (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)))
                                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                                        ? ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))
                                            ? 3U : 1U)
                                        : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                                            ? ((0U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))
                                                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)
                                                    ? 1U
                                                    : 3U)
                                                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)
                                                    ? 0U
                                                    : 1U))
                                            : ((0U 
                                                == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))
                                                ? (1U 
                                                   | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width) 
                                                      << 1U))
                                                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width)))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_ftrans) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_batch_size_of_trans 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)
                ? 0U : 1U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_trans 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ftrans_2nd)
                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd)
                    ? 0U : 1U));
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_last_w) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_batch_size_of_trans 
            = ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset))
                ? 1U : 0U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_trans 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_elem_end)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_ltrans_2nd)
                : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__end_addr_offset))
                    ? 1U : 0U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_batch_size_of_trans = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_trans = 1U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_cube_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__is_surf_end) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__count_c) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_surf))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[0U] 
        = (IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_elem
                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                        ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_winog
                        : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_batch
                            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[1U] 
        = ((0xf8000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[1U]) 
           | (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                        ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_elem
                        : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_winog
                            : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_batch
                                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__base_addr_line))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[1U] 
        = ((0x07ffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[1U]) 
           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch)
                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                    ? (1U | (0x000001feU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_channel) 
                                            >> 4U)))
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_surf))
                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_trans)
                    : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                        ? 1U : ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                                 ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_batch_size_of_trans)
                                 : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width))))) 
              << 0x0000001bU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[2U] 
        = ((0x00000300U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[2U]) 
           | (0x000003ffU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_1x1_nbatch)
                               ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                                   ? (1U | (0x000001feU 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_channel) 
                                               >> 4U)))
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__size_of_surf))
                               : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__cfg_mode_8to16)
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_8to16_size_of_trans)
                                   : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_winograd)
                                       ? 1U : ((0U 
                                                != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_batch_number))
                                                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__mode_batch_size_of_trans)
                                                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_width))))) 
                             >> 5U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[2U] 
        = ((0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_fifo_pd[2U]) 
           | (0x00000300U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_cube_end) 
                              << 9U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__dma_odd) 
                                        << 8U))));
}

void Vsim___024root___nba_comb__TOP__416(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__416\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_data_8[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_wr_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_wr_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[7U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte0_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[0U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[0U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte1_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[0U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[0U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte2_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[1U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[1U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte3_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[1U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[1U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte4_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[2U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[2U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte5_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[2U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[2U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte6_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[3U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[3U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte7_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[3U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[3U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte8_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[4U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[4U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte9_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[4U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[4U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte10_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[5U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[5U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte11_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[5U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[5U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte12_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[6U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[6U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte13_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[6U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[6U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte14_nan 
        = (IData)((((0x00007c00U == (0x00007c00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[7U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[7U]))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte15_nan 
        = (IData)((((0x7c000000U == (0x7c000000U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[7U])) 
                    & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__reg2dp_out_precision))) 
                   & (0U != (0x000003ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__pipe_p10__DOT__p10_pipe_data[7U] 
                                            >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__nan_output_num 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte15_nan) 
                          + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte14_nan) 
                             + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte13_nan) 
                                + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte12_nan) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte11_nan) 
                                      + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte10_nan) 
                                         + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte9_nan) 
                                            + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte8_nan) 
                                               + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte7_nan) 
                                                  + 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte6_nan) 
                                                   + 
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte5_nan) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte4_nan) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte3_nan) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte2_nan) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte1_nan) 
                                                        + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__is_data_byte0_nan)))))))))))))))));
}

void Vsim___024root___nba_comb__TOP__417(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__417\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00010000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
        if ((1U & (~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U] 
                      >> 0x00000014U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function)))) {
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0_sign = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0_mant = 0U;
                }
            }
        }
        if ((0x00100000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0 = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0 = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0_expo 
                = (0x000000ffU & ((IData)(0x7fU) + 
                                  VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0_expo) 
                   << 0x00000017U);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0 
                = ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))
                    ? 0U : VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias0 = 0U;
    }
    if ((0x00020000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
        if ((1U & (~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U] 
                      >> 0x00000015U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function)))) {
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1_sign = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1_mant = 0U;
                }
            }
        }
        if ((0x00200000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1 = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1 = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1_expo 
                = (0x000000ffU & ((IData)(0x7fU) + 
                                  VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1_expo) 
                   << 0x00000017U);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1 
                = ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))
                    ? 0U : VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias1 = 0U;
    }
    if ((0x00040000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
        if ((1U & (~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U] 
                      >> 0x00000016U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function)))) {
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2_sign = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2_mant = 0U;
                }
            }
        }
        if ((0x00400000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2 = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2 = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2_expo 
                = (0x000000ffU & ((IData)(0x7fU) + 
                                  VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2_expo) 
                   << 0x00000017U);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2 
                = ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))
                    ? 0U : VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias2 = 0U;
    }
    if ((0x00080000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
        if ((1U & (~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U] 
                      >> 0x00000017U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function)))) {
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3_sign = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3_mant = 0U;
                }
            }
        }
        if ((0x00800000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U])) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3 = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3 = 0U;
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__reg2dp_proc_precision))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3_expo 
                = (0x000000ffU & ((IData)(0x7fU) + 
                                  VL_EXTENDS_II(8,8, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3_expo) 
                   << 0x00000017U);
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3 
                = ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset))
                    ? 0U : VL_SHIFTL_III(32,32,8, (IData)(1U), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__out_bias3 = 0U;
    }
}

void Vsim___024root___nba_comb__TOP__418(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__418\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_single_reg__DOT__reg_rd_data 
        = ((((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                    << 2U))) | (0x000cU 
                                                == 
                                                (0x00000ffcU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
            | (((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U))) 
                | (0x0014U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
               | ((0x001cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U))) 
                  | ((0x0028U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U))) 
                     | ((0x002cU == (0x00000ffcU & 
                                     ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U))) | (0x0018U 
                                                  == 
                                                  (0x00000ffcU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))))))))
            ? ((8U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U))) ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_lut_access_type) 
                                                   << 0x00000011U) 
                                                  | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_lut_table_id) 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_lut_addr)))
                : ((0x000cU == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))
                    ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__lut_int_table_id)
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__lo_lut_data)
                        : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__le_lut_data))
                    : ((0x0010U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_hybrid_priority) 
                            << 6U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_oflow_priority) 
                                       << 5U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_uflow_priority) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_function))))
                        : ((0x0014U == (0x00000ffcU 
                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))
                            ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_index_select) 
                                << 0x00000010U) | (
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_select) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_index_offset)))
                            : ((0x001cU == (0x00000ffcU 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))
                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_end
                                : ((0x0028U == (0x00000ffcU 
                                                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                                    ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_slope_oflow_scale) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_slope_uflow_scale))
                                    : ((0x002cU == 
                                        (0x00000ffcU 
                                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_slope_oflow_shift) 
                                            << 5U) 
                                           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_slope_uflow_shift))
                                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_le_start)))))))
            : ((0x0024U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))
                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_end
                : ((0x0030U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))
                    ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_slope_oflow_scale) 
                        << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_slope_uflow_scale))
                    : ((0x0034U == (0x00000ffcU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                        ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_slope_oflow_shift) 
                            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_slope_uflow_shift))
                        : ((0x0020U == (0x00000ffcU 
                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U)))
                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__reg2dp_lut_lo_start
                            : ((4U == (0x00000ffcU 
                                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                          << 2U))) ? 
                               (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_consumer) 
                                 << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_producer))
                                : ((0U == (0x00000ffcU 
                                           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))
                                    ? ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                          ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_consumer)
                                              ? 1U : 2U)
                                          : 0U) << 0x00000010U) 
                                       | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_consumer)
                                               ? 2U
                                               : 1U)
                                           : 0U)) : 0U)))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_mod 
        = (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_cur)) 
                                    + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_add))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_new 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_add))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_mod
            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_ext);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_mod 
        = (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_cur)) 
                                    + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_add))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_new 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_add))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_mod
            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_ext);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_mod 
        = (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_cur)) 
                                    + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_add))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_new 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_add))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_mod
            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_ext);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_mod 
        = (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_cur)) 
                                    + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_add))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_new 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_add))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_mod
            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_ext);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_mod 
        = (0x00000003ffffffffULL & ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_cur)) 
                                    + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_add))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_new 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_add))
            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_mod
            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_ext);
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_NV_NVDLA_SDP_cmux__DOT__op_en_load) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_nxt = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_nxt = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_nxt = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_nxt = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_nxt = 0ULL;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_nxt 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_oflow_cnt_new;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_nxt 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_uflow_cnt_new;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_nxt 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_hybrid_cnt_new;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_nxt 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_le_hit_cnt_new;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_nxt 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__perf_lut_lo_hit_cnt_new;
    }
}

void Vsim___024root___nba_comb__TOP__419(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__419\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_batch_end 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_batch_number) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__count_b));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_elem_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_batch_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT____VdfgRegularize_h2052b453_0_1) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__count_e)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_line_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_elem_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT____VdfgRegularize_h2052b453_0_1) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_last_w)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_surf_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_line_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__cfg_mode_1x1_pack) 
              | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.reg2dp_height) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__count_h))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__ig2eg_cube_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__is_surf_end) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__cfg_mode_1x1_pack) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__count_c) 
                 == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_ig__DOT__size_of_surf))));
}

void Vsim___024root___nba_comb__TOP__420(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__420\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT____VdfgRegularize_h8a978f3b_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_pvld_p 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_count_p)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT____VdfgRegularize_h8a978f3b_0_2)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT____VdfgRegularize_he38de5d0_0_1)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next_is_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_popping)) 
           & (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__rd_count_p_next 
                = (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_count_p));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next 
                = (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__rd_count_p_next 
                = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next 
                = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__rd_count_p_next 
            = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_rd_count_p) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next 
            = (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_count_next 
                = (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_count));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__rd_count_p_next 
                = (3U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_count_p));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_count_next 
                = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_count) 
                         - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__rd_count_p_next 
                = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_count_p) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__wr_count_next 
            = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_wr_count) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__rd_count_p_next 
            = (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_dat__DOT__dat_fifo_rd_count_p) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__dat_fifo_wr_pvld)));
    }
}

void Vsim___024root___nba_comb__TOP__421(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__421\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__load_cmd_en 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_count)) 
           & (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
               == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type)) 
              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__ld2csb_idle) 
                 & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_cmd_valid)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_valid 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_count)) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__load_cmd_en)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT____VdfgRegularize_h3bce5862_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_ready) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__load_cmd_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__load_cmd 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_valid) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_count)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT____VdfgRegularize_h3bce5862_0_2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb2ld_rdy 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT____VdfgRegularize_h3bce5862_0_2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_cmd_interrupt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb2ld_rdy) 
           & (1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_count)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__gather_rdy 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__launch_count)) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg2dp_cmd_interrupt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__cmd_launch_rdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__gather_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__gather_rdy)));
}

void Vsim___024root___nba_comb__TOP__422(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__422\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__io__DOT__bitclk 
        = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__weclk)));
}

void Vsim___024root___nba_comb__TOP__423(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__423\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x00003fffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__weclk))));
}

void Vsim___024root___nba_comb__TOP__424(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__424\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000003ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__weclk))));
}

void Vsim___024root___nba_comb__TOP__425(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__425\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__426(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__426\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000007ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__weclk))));
}

void Vsim___024root___nba_comb__TOP__427(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__427\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__428(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__428\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x00007fffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__weclk))));
}

void Vsim___024root___nba_comb__TOP__429(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__429\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__430(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__430\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__we_lat));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__weclk)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__weclk)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__weclk))));
}

void Vsim___024root___nba_comb__TOP__431(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__431\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9.__PVT__wr_reserving) 
           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8.__PVT__wr_reserving) 
              | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7.__PVT__wr_reserving) 
                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6.__PVT__wr_reserving) 
                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5.__PVT__wr_reserving) 
                       | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4.__PVT__wr_reserving) 
                          | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3.__PVT__wr_reserving) 
                             | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2.__PVT__wr_reserving) 
                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1.__PVT__wr_reserving) 
                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0.__PVT__wr_reserving))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_ready)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__432(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__432\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo9.__PVT__wr_reserving) 
           | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo8.__PVT__wr_reserving) 
              | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo7.__PVT__wr_reserving) 
                 | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6.__PVT__wr_reserving) 
                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5.__PVT__wr_reserving) 
                       | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4.__PVT__wr_reserving) 
                          | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3.__PVT__wr_reserving) 
                             | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2.__PVT__wr_reserving) 
                                | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1.__PVT__wr_reserving) 
                                   | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0.__PVT__wr_reserving))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_ready)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ipipe_axi_rdy)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__433(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__433\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__reg_rd_data 
        = ((((5U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
             | (3U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))) 
            | (((2U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                | (8U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))) 
               | ((0x000bU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                  | ((0x000dU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                     | ((0x000eU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                        | (4U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))))))))
            ? ((5U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_dst_ram_type) 
                    << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_src_ram_type))
                : ((3U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_high_0_v8
                    : ((2U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                        ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_low_0_v32 
                           << 5U) : ((8U == (0x000003ffU 
                                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                      ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_line_0_stride 
                                         << 5U) : (
                                                   (0x000bU 
                                                    == 
                                                    (0x000003ffU 
                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                                    ? 
                                                   (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_surf_0_stride 
                                                    << 5U)
                                                    : 
                                                   ((0x000dU 
                                                     == 
                                                     (0x000003ffU 
                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                                     ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_launch0_0_grp0_launch)
                                                     : 
                                                    ((0x000eU 
                                                      == 
                                                      (0x000003ffU 
                                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                                      ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_launch1_0_grp1_launch)
                                                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_0_size))))))))
            : ((((6U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                 | (0x000cU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))) 
                | (((1U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                    | (0U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))) 
                   | ((7U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                      | ((0x000aU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                         | ((0x000fU == (0x000003ffU 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))) 
                            | (9U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd))))))))
                ? ((6U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_repeat_0_number
                    : ((0x000cU == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                        ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_op_0_en)
                        : ((1U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8
                            : ((0U == (0x000003ffU 
                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32 
                                   << 5U) : ((7U == 
                                              (0x000003ffU 
                                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                              ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_line_0_stride 
                                                 << 5U)
                                              : ((0x000aU 
                                                  == 
                                                  (0x000003ffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                                  ? 
                                                 (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_surf_0_stride 
                                                  << 5U)
                                                  : 
                                                 ((0x000fU 
                                                   == 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_status_0_stall_count_en)
                                                   : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_surf_repeat_0_number)))))))
                : ((0x0010U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                    ? (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp1_busy) 
                        << 0x0000000aU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp0_busy) 
                                            << 9U) 
                                           | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__st2csb_idle) 
                                                & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_pvld)) 
                                                    & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_pvld_int)) 
                                                        & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__rd_pushing)) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__csb_fifo_rd_count_p)))) 
                                                       & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__wr_reserving)) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_count))))) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__ld2csb_idle))) 
                                               << 8U) 
                                              | (0x000000ffU 
                                                 & ((IData)(0x14U) 
                                                    - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_wr_count))))))
                    : ((0x0011U == (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                        ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp0_read_stall_count
                        : ((0x0012U == (0x000003ffU 
                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                            ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp0_write_stall_count
                            : ((0x0013U == (0x000003ffU 
                                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp1_read_stall_count
                                : ((0x0014U == (0x000003ffU 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__req_pd)))
                                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__status_grp1_write_stall_count
                                    : 0U)))))));
}

void Vsim___024root___nba_comb__TOP__434(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__434\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT____VdfgRegularize_h398ac72f_0_1) 
          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__wthru_en)) 
         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT____VdfgRegularize_h398ac72f_0_3))) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT____VdfgRegularize_h398ac72f_0_3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p1_pipe_data[2U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__wthru_di[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__wthru_di[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__wthru_di[2U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_r0_OutputMuxDataOut[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__dout[2U];
    }
}

void Vsim___024root___nba_comb__TOP__435(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__435\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_r0_OutputMuxDataOut 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT____VdfgRegularize_hf04f37a5_0_1) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__wthru_en)) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT____VdfgRegularize_hf04f37a5_0_3))
            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT____VdfgRegularize_hf04f37a5_0_3)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__p2_pipe_data)
                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__wthru_di))
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2));
}

void Vsim___024root___nba_comb__TOP__436(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__436\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__ram_Inst_64X10__DOT__RA 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                    << 5U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U))) 
                                  | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                      << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__ram__DOT__ram__DOT__r_nv_ram_rws_64x10__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))
                               : 0U) : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__u_fifo__DOT__rd_adr_p) 
                                        >> 1U)));
}

void Vsim___024root___nba_comb__TOP__437(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__437\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cq2eg_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT____VdfgRegularize_h83eb64b8_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT____VdfgRegularize_h83eb64b8_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__438(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__438\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_busy_int)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_6) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask0_vld) 
                 & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q)) 
                    | (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_busy_int))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_reserving 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_busy_int)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_6) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask1_vld) 
                 & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q)) 
                    | (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_busy_int))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_count))
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_count)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_count_p) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_count))
                  : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_count)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_count_p) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_reserving));
}

void Vsim___024root___nba_comb__TOP__439(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__439\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask0_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask1_vld));
}

void Vsim___024root___nba_comb__TOP__440(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__440\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT____VdfgRegularize_h148d05aa_0_1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__sfifo0_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__441(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__441\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT____VdfgRegularize_h148d05aa_0_1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__sfifo1_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__442(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__442\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT____VdfgRegularize_h5f819b07_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pfifo0_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo0__DOT__pfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__443(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__443\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT____VdfgRegularize_h5f819b07_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pfifo1_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo1__DOT__pfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__444(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__444\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT____VdfgRegularize_h5f819b07_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pfifo2_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo2__DOT__pfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__445(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__445\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT____VdfgRegularize_h5f819b07_0_2 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pfifo3_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_pfifo3__DOT__pfifo_rd_pvld_int));
}

void Vsim___024root___nba_comb__TOP__446(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__446\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_5 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_570)));
}

void Vsim___024root___nba_comb__TOP__447(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__447\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__fifo_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__pipe_p1__DOT__p1_skid_ready_flop));
}

void Vsim___024root___nba_comb__TOP__448(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__448\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT____VdfgRegularize_h9b926d28_0_3 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_513_258.__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_572)));
}

void Vsim___024root___nba_comb__TOP__449(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__449\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_spt_pvld) 
           & ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_spt_pd))
               ? (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask0_vld)) 
                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_570)) 
                  & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask1_vld)) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_572)))
               : (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask0_vld)) 
                   | (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_busy_int))) 
                  & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_rd_mask1_vld)) 
                     | (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_busy_int))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__dma_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_prdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT____VdfgRegularize_hafefd77d_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_spt_pvld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__dma_rd_cdt_lat_fifo_pop) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__is_last_beat)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT____VdfgRegularize_hafefd77d_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_is_4 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_popping)) 
           & (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_no_wr_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT____VdfgRegularize_haa0f1449_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_popping) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__ram_we 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_reserving) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_popping)) 
              | (0U < (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_count))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_popping) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__rd_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__cmd2dat_spt_count));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_count));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__rd_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__cmd2dat_spt_count) 
                         - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__rd_count_next 
            = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__cmd2dat_spt_count) 
                     + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_reserving)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next 
            = (7U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__450(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__450\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT____VdfgRegularize_h18f09f18_0_3 
        = ((4U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_busy_int)) 
                  << 2U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT____VdfgRegularize_h18f09f18_0_2));
}

void Vsim___024root___nba_comb__TOP__451(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__451\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_pvld 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__reg2dp_input_data_d)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__sdp2pdp_valid_use) 
              & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_busy_int)) 
                 & (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT____VdfgRegularize_h18f09f18_0_2)))));
}

void Vsim___024root___nba_comb__TOP__452(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__452\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_h5bed58b6_0_1 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT____VdfgRegularize_h5bed58b6_0_1)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_pvld_p));
}

void Vsim___024root___nba_comb__TOP__453(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__453\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[0U]) 
           | (3U & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__dp2reg_done_f)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[0U] 
        = ((3U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[0U]) 
           | ((IData)(((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                        ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                            ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo.ro_rd_pd
                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo.ro_rd_pd)
                            : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo.ro_rd_pd
                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo.ro_rd_pd))
                        : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                            ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo.ro_rd_pd
                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo.ro_rd_pd)
                            : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo.ro_rd_pd
                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.ro_rd_pd)))) 
              << 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[1U] 
        = (((IData)(((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                      ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                          ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                              ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo.ro_rd_pd
                              : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo.ro_rd_pd)
                          : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                              ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo.ro_rd_pd
                              : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo.ro_rd_pd))
                      : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                          ? ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                              ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo.ro_rd_pd
                              : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo.ro_rd_pd)
                          : ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                              ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo.ro_rd_pd
                              : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.ro_rd_pd)))) 
            >> 0x0000001eU) | ((IData)((((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                          ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                  ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo.ro_rd_pd
                                                  : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo.ro_rd_pd)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                  ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo.ro_rd_pd
                                                  : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo.ro_rd_pd))
                                          : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                  ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo.ro_rd_pd
                                                  : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo.ro_rd_pd)
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                  ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo.ro_rd_pd
                                                  : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.ro_rd_pd))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[2U] 
        = ((0x01fffffcU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[2U]) 
           | (0x01ffffffU & ((IData)((((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                        ? ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo.ro_rd_pd
                                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo.ro_rd_pd)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo.ro_rd_pd
                                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo.ro_rd_pd))
                                        : ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo.ro_rd_pd
                                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo.ro_rd_pd)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__fifo_sel))
                                                ? vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo.ro_rd_pd
                                                : vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.ro_rd_pd))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001eU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[2U] 
        = ((3U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_rand_data[2U]) 
           | (0x01ffffffU & (((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__invalid_flag) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__is_last_c) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__is_last_h) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__is_last_w) 
                                                        << 1U) 
                                                       | (1U 
                                                          == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__beat_cnt)))) 
                                                   << 0x0000000bU)) 
                              | ((0x00000700U & (((IData)(4U) 
                                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__tran_cnt)) 
                                                 << 8U)) 
                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__width_cnt) 
                                     << 4U) | (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__width_cnt) 
                                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__beat_cnt)))))) 
                             << 2U)));
}

void Vsim___024root___nba_comb__TOP__454(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__454\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_2) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_1) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_0) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hed865a7a_0_3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__dma_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h22015e6a_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h22015e6a_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__455(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__455\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_wr_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_2) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_1) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_0) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT____VdfgRegularize_hd45498a0_0_3)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__dma_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h300e9d69_0_0 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_prdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h300e9d69_0_0)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
            ? (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping))
            : (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p)) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)));
}

void Vsim___024root___nba_comb__TOP__456(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__456\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__457(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__457\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__beat_cnt) 
           == (0x00003fffU & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pvld))) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pd))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__dat_batch_end 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pvld) 
            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_cmd__DOT__cmd2dat_dma_pd) 
               >> 0x0000000eU)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_dout__DOT__is_last_beat));
}

void Vsim___024root___nba_comb__TOP__458(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__458\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__ram_Inst_80X72__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__ram_Inst_60X168__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_sumpd_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_60x168__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim___024root___nba_comb__TOP__459(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__459\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ram__DOT__r_nv_ram_rwsp_32x32__DOT__ram_Inst_32X32__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__460(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__460\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__461(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__461\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__rd_popping 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT____VdfgRegularize_hbe20351d_0_1)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__wdma_done));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__rd_req_next_o 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__wdma_done) 
           | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT____VdfgRegularize_hbe20351d_0_1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__rd_req_next 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT____VdfgRegularize_hbe20351d_0_0)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_intr_fifo__DOT__intr_fifo_rd_pvld_int_o)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__wdma_done));
}

void Vsim___024root___nba_sequent__TOP__1493(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1493\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[0U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[1U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[2U] 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p6_pipe_data[2U];
}

void Vsim___024root___nba_sequent__TOP__1494(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1494\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__ram_Inst_245X82_0_432__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_245x514__DOT__muxed_re_r0_0_432)));
    }
}

void Vsim___024root___nba_comb__TOP__462(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__462\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_vld) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_rdy) 
              & ((~ (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[0x00000010U] 
                     >> 2U)) & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_req_pd[2U] 
                                >> 0x0000000dU))));
}

void Vsim___024root___nba_sequent__TOP__1495(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1495\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow0__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow0__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1496(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1496\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow1__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow1__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1497(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1497\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow2__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow2__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow2__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow2__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1498(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1498\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow3__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow3__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow3__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__iow3__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1499(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1499\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__ram_Inst_256X11__DOT__ITOP__DOT__RADR 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__ram__DOT__r_nv_ram_rwsp_256x11__DOT__D_Ra_reg_r0;
    }
}

void Vsim___024root___nba_comb__TOP__463(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__463\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__gated_clk_core_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__ITOP__DOT__re_lat));
}

void Vsim___024root___nba_comb__TOP__464(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__464\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo_rd_pd[9U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__pre_muxed_Di_w0_B[9U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_surf_0_stride)) 
                        << 0x0000001bU) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_surf_0_stride))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_surf_repeat_0_number 
                << 0x00000016U) | (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_surf_0_stride)) 
                                             << 0x0000001bU) 
                                            | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_surf_0_stride))) 
                                           >> 0x00000020U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_line_0_stride)) 
                          << 0x0000001bU) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_line_0_stride)))) 
                << 0x0000000eU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_surf_repeat_0_number 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[3U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_line_0_stride)) 
                          << 0x0000001bU) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_line_0_stride)))) 
                >> 0x00000012U) | ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_line_0_stride)) 
                                              << 0x0000001bU) 
                                             | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_line_0_stride))) 
                                            >> 0x00000020U)) 
                                   << 0x0000000eU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[4U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_high_0_v8)) 
                          << 0x0000000fU) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_0_size) 
                                                              << 2U) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_src_ram_type) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_dst_ram_type))))))) 
                << 0x0000001cU) | (((0x00003ff0U & 
                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_repeat_0_number 
                                      << 4U)) | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_line_0_stride)) 
                                                            << 0x0000001bU) 
                                                           | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_line_0_stride))) 
                                                          >> 0x00000020U)) 
                                                 >> 0x00000012U)) 
                                   | (0xffffc000U & 
                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_repeat_0_number 
                                       << 4U))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[5U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_high_0_v8)) 
                          << 0x0000000fU) | (QData)((IData)(
                                                            (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_0_size) 
                                                              << 2U) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_src_ram_type) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_dst_ram_type))))))) 
                >> 4U) | ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_high_0_v8)) 
                                     << 0x0000000fU) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_0_size) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_src_ram_type) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_dst_ram_type)))))) 
                                   >> 0x00000020U)) 
                          << 0x0000001cU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[6U] 
            = (((0x0ffff800U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_low_0_v32 
                                << 0x0000000bU)) | 
                ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_high_0_v8)) 
                            << 0x0000000fU) | (QData)((IData)(
                                                              (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_line_0_size) 
                                                                << 2U) 
                                                               | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_src_ram_type) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_cmd_0_dst_ram_type)))))) 
                          >> 0x00000020U)) >> 4U)) 
               | (0xf0000000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_low_0_v32 
                                 << 0x0000000bU)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[7U] 
            = (((0x0fffffc0U & ((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8)))) 
                                << 6U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_dst_addr_low_0_v32 
                                           >> 0x00000015U)) 
               | (0xf0000000U & ((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8)))) 
                                 << 6U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[8U] 
            = ((((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                           << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8)))) 
                 >> 0x0000001aU) | (0x0fffffc0U & ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8))) 
                                                            >> 0x00000020U)) 
                                                   << 6U))) 
               | (0xf0000000U & ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8))) 
                                          >> 0x00000020U)) 
                                 << 6U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[9U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_low_0_v32)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_src_addr_high_0_v8))) 
                        >> 0x00000020U)) >> 0x0000001aU);
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__ram_Inst_20X288_0_0__DOT__WD[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__muxed_Di_w0[8U];
}

void Vsim___024root___nba_sequent__TOP__1500(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1500\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow0__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow0__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1501(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1501\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow1__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__iow1__DOT__arr__v0;
    }
}

void Vsim___024root___nba_sequent__TOP__1502(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1502\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__ram_Inst_80X16__DOT__ITOP__DOT__RADR 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0;
    }
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim___024root___nba_comb__TOP__465(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__465\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3289[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__466(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__466\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3352[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h8b2c9f06_0;

void Vsim___024root___nba_comb__TOP__467(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__467\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum = 0;
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum = 0;
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum = 0;
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout);
    VlWide<16>/*511:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di;
    VL_ZERO_W(512, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum = 0;
    // Body
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum 
        = (0x0000001fU & (- (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr)));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000fU];
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__di[0x0000000fU];
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[1U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[1U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[2U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[2U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[3U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[3U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[4U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[4U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[5U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[5U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[6U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[6U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[7U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[7U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[8U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[8U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[9U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[9U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000aU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000aU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000bU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000bU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000cU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000cU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000dU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000dU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000eU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000eU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000fU] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                << 0x00000010U) | (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000fU] 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                                      >> 0x00000010U)));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_wr_shift[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__2__Vfuncout[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum 
        = (0x0000001fU & (- (0x0000001eU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd[0x0000000fU];
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__di[0x0000000fU];
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[1U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[1U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[2U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[2U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[3U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[3U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[4U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[4U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[5U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[5U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[6U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[6U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[7U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[7U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[8U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[8U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[9U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[9U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000aU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000aU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000bU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000bU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000cU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000cU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000dU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000dU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000eU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000eU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000fU] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                << 0x00000010U) | (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000fU] 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                                      >> 0x00000010U)));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_wr_shift[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__3__Vfuncout[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum 
        = (0x0000001fU & (- (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr)));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb8[0x0000000fU];
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__di[0x0000000fU];
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[1U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[1U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[2U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[2U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[3U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[3U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[4U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[4U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[5U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[5U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[6U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[6U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[7U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[7U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[8U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[8U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[9U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[9U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000aU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000aU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000bU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000bU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000cU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000cU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000dU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000dU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000eU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000eU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000fU] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                << 0x00000010U) | (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000fU] 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                                      >> 0x00000010U)));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_wr_shift[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__4__Vfuncout[0x0000000fU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum 
        = (0x0000001fU & (- VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr), 1U)));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[1U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[2U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[3U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[5U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[6U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[7U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[8U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[9U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000aU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000bU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000cU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000dU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000eU];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__wr_data_comb16[0x0000000fU];
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU] 
            = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__di[0x0000000fU];
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf0[0x0000000fU];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U])) 
                         << 0x00000020U) | (QData)((IData)(
                                                           vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U]))) 
                       >> 0x00000020U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf1[0x0000000fU];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf2[0x0000000fU];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[1U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[1U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[2U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[2U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[3U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[3U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[4U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[4U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[5U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[5U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[6U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[6U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[7U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[7U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[8U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[8U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[9U] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[9U] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000aU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000aU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000bU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000bU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000cU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000cU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000dU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000dU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000eU] 
            = (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000eU] 
               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                   << 0x00000010U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU] 
                                      >> 0x00000010U)));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000fU] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U] 
                << 0x00000010U) | (Vsim__ConstPool__CONST_h8b2c9f06_0[0x0000000fU] 
                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU] 
                                      >> 0x00000010U)));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[4U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[5U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[6U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[7U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[8U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[8U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[9U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[9U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000aU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000aU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000bU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000bU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000cU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000cU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000dU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000dU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000eU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000eU];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000fU] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__Vstatic__shf3[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[5U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[6U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[6U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[7U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[7U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[8U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[8U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[9U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[9U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000aU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000aU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000bU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000bU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000cU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000cU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000dU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000dU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000eU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000eU];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_wr_shift[0x0000000fU] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift512_16b__5__Vfuncout[0x0000000fU];
}

void Vsim___024root___nba_comb__TOP__468(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__468\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex1_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_257_2.__VdfgRegularize_h6e95ff9d_0_3418[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_1bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_1bytex2_alu_rod0_pd[7U];
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cfg_mode_2bytex2) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_mul_rod0_pd[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mode_2bytex2_alu_rod0_pd[7U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mul_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__alu_rod0_pd[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim___024root___nba_comb__TOP__469(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__469\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__load_din 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_pvld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_12 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_prdy) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                  ? (0x00000fffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))
                  : ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_d_vld)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__buf2sum_d_rdy))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_0 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info 
                                    >> 0x00000022U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_4 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info 
                                    >> 0x00000023U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info 
                                                            >> 0x00000021U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit0.dp2lut_X_info 
                                                             >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_1 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info 
                                    >> 0x00000022U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_5 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info 
                                    >> 0x00000023U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info 
                                                            >> 0x00000021U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit1.dp2lut_X_info 
                                                             >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_2 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info 
                                    >> 0x00000022U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_6 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info 
                                    >> 0x00000023U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info 
                                                            >> 0x00000021U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_X_info 
                                                             >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_3 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info 
                                    >> 0x00000022U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_7 
        = ((0x00020000U & ((IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info 
                                    >> 0x00000023U)) 
                           << 0x00000011U)) | ((0x00010000U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info 
                                                            >> 0x00000021U)) 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit3.dp2lut_X_info 
                                                             >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_13 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_12) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_LUT_CTRL_unit2.dp2lut_pvld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__load_din 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_valid) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__normalz_buf_data_prdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__normalz_buf_data_prdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data_vld) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_ready_bc)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_ready_bc)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_catch))));
}

void Vsim___024root___nba_comb__TOP__470(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__470\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[0U] 
        = ((0xffe00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[0U]) 
           | (0x001fffffU & ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                  ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int16_sum3))
                                  : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                ? (0x000fffffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int16_sum5))
                                                : 0U)
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                    ? 
                                                   (0x000fffffU 
                                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int16_sum7))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int16_sum9)
                                                    : 0U))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[0U] 
        = ((0x001fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[0U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int8_msb_sum 
              << 0x00000015U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U] 
        = ((0xfffffc00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_1st__DOT__int8_msb_sum 
              >> 0x0000000bU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U] 
        = ((0x800003ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U]) 
           | (0x7ffffc00U & (((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                               ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                   ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int16_sum3))
                                   : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                 ? 
                                                (0x000fffffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int16_sum5))
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                                 ? 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 (0x000fffffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int16_sum7))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int16_sum9)
                                                  : 0U)))) 
                             << 0x0000000aU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U] 
        = ((0x7fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[1U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int8_msb_sum 
              << 0x0000001fU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[2U] 
        = ((0xfff00000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[2U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_2nd__DOT__int8_msb_sum 
              >> 1U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[2U] 
        = ((0x000fffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[2U]) 
           | (((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                    ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum3))
                    : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                  ? (0x000fffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum5))
                                  : 0U) : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                ? (0x000fffffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum7))
                                                : 0U)
                                            : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum9)
                                                : 0U)))) 
              << 0x00000014U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U] 
        = ((0xfffffe00U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U]) 
           | (0x000001ffU & (((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                               ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                   ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum3))
                                   : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                 ? 
                                                (0x000fffffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum5))
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                                 ? 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 (0x000fffffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum7))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int16_sum9)
                                                  : 0U)))) 
                             >> 0x0000000cU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U] 
        = ((0xc00001ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_3rd__DOT__int8_msb_sum 
              << 9U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U] 
        = ((0x3fffffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[3U]) 
           | (((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                    ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum3))
                    : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                              ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                  ? (0x000fffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum5))
                                  : 0U) : ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                            ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                ? (0x000fffffU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum7))
                                                : 0U)
                                            : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum9)
                                                : 0U)))) 
              << 0x0000001eU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[4U] 
        = ((0xfff80000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[4U]) 
           | (0x0007ffffU & (((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                               ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                   ? (0x0007ffffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum3))
                                   : 0U) : ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                             ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                 ? 
                                                (0x000fffffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum5))
                                                 : 0U)
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
                                                 ? 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? 
                                                 (0x000fffffU 
                                                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum7))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)
                                                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int16_sum9)
                                                  : 0U)))) 
                             >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[4U] 
        = ((0x0007ffffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[4U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int8_msb_sum 
              << 0x00000013U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__int8_sum[5U] 
        = (0x000000ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_sum_block_4th__DOT__int8_msb_sum 
                          >> 0x0000000dU));
}

void Vsim___024root___nba_comb__TOP__471(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__471\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT____VdfgRegularize_h9492617c_0_1) 
          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__wthru_en)) 
         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT____VdfgRegularize_h9492617c_0_3))) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT____VdfgRegularize_h9492617c_0_3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__wthru_di[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__wthru_di[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__wthru_di[2U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__muxed_r0_OutputMuxDataOut[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
    }
}

void Vsim___024root___nba_comb__TOP__472(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__472\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[0U] 
                = vlSelfRef.__VdfgRegularize_he50b618e_0_100[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[1U] 
                = vlSelfRef.__VdfgRegularize_he50b618e_0_100[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[2U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                    << 0x0000000fU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                        << 0x0000000eU) 
                                       | vlSelfRef.__VdfgRegularize_he50b618e_0_100[2U]));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[2U] = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_19x80__DOT__ram_Inst_19X80__DOT__WD[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__info_in_pd[2U];
    }
}

void Vsim___024root___nba_comb__TOP__473(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__473\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))))))) 
                                << 0x00000018U) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                                    << 0x0000000eU) 
                                                                   | ((0x00003ff0U 
                                                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                          << 3U) 
                                                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28)))))))) 
                      << 6U) | (IData)(((((QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                                            << 0x0000000dU) 
                                                           | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                                                               << 3U) 
                                                              | (7U 
                                                                 & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                             << 0x0000000aU) 
                                                            | (0x000003ffU 
                                                               & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31)))))))) 
                                        >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))))))) 
                                << 0x00000018U) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                                    << 0x0000000eU) 
                                                                   | ((0x00003ff0U 
                                                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                          << 4U)) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                          << 3U) 
                                                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28)))))))) 
                      >> 0x0000001aU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))))))) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                                       << 0x0000000eU) 
                                                                      | ((0x00003ff0U 
                                                                          & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                             << 3U) 
                                                                            | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28))))))) 
                                                  >> 0x00000020U)) 
                                         << 6U));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((
                                                   (0x00003ff0U 
                                                    & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                       << 4U)) 
                                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                       << 3U) 
                                                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28))) 
                                                  << 0x0000000fU) 
                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                                     << 0x0000000aU) 
                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((0x00001c00U 
                                                                      & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                                         << 0x0000000aU)) 
                                                                     | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0)) 
                                                                    << 0x00000013U) 
                                                                   | ((0x0007fe00U 
                                                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                                                             << 5U) 
                                                                            | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23))))))))) 
                      << 0x0000000bU) | __Vtemp_1[2U]);
    __Vtemp_2[3U] = (((IData)((((QData)((IData)((((
                                                   (0x00003ff0U 
                                                    & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                       << 4U)) 
                                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                       << 3U) 
                                                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28))) 
                                                  << 0x0000000fU) 
                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                                     << 0x0000000aU) 
                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((0x00001c00U 
                                                                      & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                                         << 0x0000000aU)) 
                                                                     | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0)) 
                                                                    << 0x00000013U) 
                                                                   | ((0x0007fe00U 
                                                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                                                             << 5U) 
                                                                            | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23))))))))) 
                      >> 0x00000015U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((0x00003ff0U 
                                                                        & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                           << 4U)) 
                                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                           << 3U) 
                                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28))) 
                                                                      << 0x0000000fU) 
                                                                     | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                                                         << 0x0000000aU) 
                                                                        | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((0x00001c00U 
                                                                         & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                                            << 0x0000000aU)) 
                                                                        | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0)) 
                                                                       << 0x00000013U) 
                                                                      | ((0x0007fe00U 
                                                                          & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                             << 9U)) 
                                                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                                                                << 5U) 
                                                                               | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23)))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000bU));
    __Vtemp_2[4U] = ((IData)(((((QData)((IData)((((
                                                   (0x00003ff0U 
                                                    & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                       << 4U)) 
                                                   | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                       << 3U) 
                                                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28))) 
                                                  << 0x0000000fU) 
                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                                     << 0x0000000aU) 
                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((0x00001c00U 
                                                                      & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                                         << 0x0000000aU)) 
                                                                     | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0)) 
                                                                    << 0x00000013U) 
                                                                   | ((0x0007fe00U 
                                                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31))) 
                                                                          << 9U)) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                                                             << 5U) 
                                                                            | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23)))))))) 
                              >> 0x00000020U)) >> 0x00000015U);
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[0U] 
            = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
                 << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                     << 0x0000001cU) 
                                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                       << 0x00000017U))) 
               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                   << 0x0000000dU) | ((0x00001c00U 
                                       & ((- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                          << 0x0000000aU)) 
                                      | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
            = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                          << 0x0000000dU) 
                                         | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
                                             << 3U) 
                                            | (7U & 
                                               (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10)))))))) 
                        << 0x00000014U) | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0) 
                                                            << 0x0000000aU) 
                                                           | (0x000003ffU 
                                                              & (- (IData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31)))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U] 
            = __Vtemp_1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
            = __Vtemp_2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[4U] 
            = __Vtemp_2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[5U] 
            = __Vtemp_2[4U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2sync_pd[5U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[5U];
    }
}

void Vsim___024root___nba_comb__TOP__474(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__474\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<7>/*223:0*/ __Vtemp_11;
    VlWide<7>/*223:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<7>/*223:0*/ __Vtemp_16;
    // Body
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x0001ffffU 
                                                 & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[4U] 
                                                     << 9U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                       >> 0x00000017U))))) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  ((0x01fe0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U)))) 
                                                                       << 0x00000011U)) 
                                                                   | (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          << 0x0000000dU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                            >> 0x00000013U)))))))) 
                      << 0x00000012U) | (IData)(((((QData)((IData)(
                                                                   ((0x01fe0000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                                >> 0x00000016U)))) 
                                                                        << 0x00000011U)) 
                                                                    | (0x0001ffffU 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                          >> 6U))))) 
                                                   << 0x00000019U) 
                                                  | (QData)((IData)(
                                                                    ((0x01fe0000U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000012U)))) 
                                                                         << 0x00000011U)) 
                                                                     | (0x0001ffffU 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                           >> 2U)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((0x0001ffffU 
                                                 & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[4U] 
                                                     << 9U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                       >> 0x00000017U))))) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  ((0x01fe0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U)))) 
                                                                       << 0x00000011U)) 
                                                                   | (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          << 0x0000000dU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                            >> 0x00000013U)))))))) 
                      >> 0x0000000eU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[4U] 
                                                                         << 9U) 
                                                                        | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                           >> 0x00000017U))))) 
                                                    << 0x00000019U) 
                                                   | (QData)((IData)(
                                                                     ((0x01fe0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U)))) 
                                                                          << 0x00000011U)) 
                                                                      | (0x0001ffffU 
                                                                         & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                               >> 0x00000013U))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x00000012U));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x01fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                    >> 5U)))) 
                                                     << 0x00000011U)) 
                                                 | (0x0001ffffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                          >> 0x00000015U)))))) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  ((0x01fe0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U)))) 
                                                                       << 0x00000011U)) 
                                                                   | (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                          << 0x0000000fU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                            >> 0x00000011U)))))))) 
                      << 0x00000012U) | (IData)(((((QData)((IData)(
                                                                   ((0x01fe0000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 0x00000014U)))) 
                                                                        << 0x00000011U)) 
                                                                    | (0x0001ffffU 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          >> 4U))))) 
                                                   << 0x00000019U) 
                                                  | (QData)((IData)(
                                                                    ((0x01fe0000U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                                >> 0x00000010U)))) 
                                                                         << 0x00000011U)) 
                                                                     | (0x0001ffffU 
                                                                        & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U]))))) 
                                                 >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x01fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                    >> 5U)))) 
                                                     << 0x00000011U)) 
                                                 | (0x0001ffffU 
                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                          >> 0x00000015U)))))) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  ((0x01fe0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U)))) 
                                                                       << 0x00000011U)) 
                                                                   | (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                          << 0x0000000fU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                            >> 0x00000011U)))))))) 
                      >> 0x0000000eU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x01fe0000U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                                >> 5U)))) 
                                                                         << 0x00000011U)) 
                                                                     | (0x0001ffffU 
                                                                        & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                            << 0x0000000bU) 
                                                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                              >> 0x00000015U)))))) 
                                                    << 0x00000019U) 
                                                   | (QData)((IData)(
                                                                     ((0x01fe0000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U)))) 
                                                                          << 0x00000011U)) 
                                                                      | (0x0001ffffU 
                                                                         & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                             << 0x0000000fU) 
                                                                            | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                               >> 0x00000011U))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x00000012U));
    __Vtemp_3[3U] = (((IData)((((QData)((IData)(((0x01fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                    >> 0x00000016U)))) 
                                                     << 0x00000011U)) 
                                                 | (0x0001ffffU 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                       >> 6U))))) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  ((0x01fe0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000012U)))) 
                                                                       << 0x00000011U)) 
                                                                   | (0x0001ffffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                         >> 2U))))))) 
                      << 4U) | ((IData)(((((QData)((IData)(
                                                           ((0x01fe0000U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                               >> 5U)))) 
                                                                << 0x00000011U)) 
                                                            | (0x0001ffffU 
                                                               & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                   << 0x0000000bU) 
                                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                     >> 0x00000015U)))))) 
                                           << 0x00000019U) 
                                          | (QData)((IData)(
                                                            ((0x01fe0000U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U)))) 
                                                                 << 0x00000011U)) 
                                                             | (0x0001ffffU 
                                                                & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                    << 0x0000000fU) 
                                                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                      >> 0x00000011U))))))) 
                                         >> 0x00000020U)) 
                                >> 0x0000000eU));
    __Vtemp_8[4U] = (((IData)(((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                          >> 0x00000012U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)((0x0001ffffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                     >> 2U)))))) 
                      >> 0x0000001cU) | (((IData)((
                                                   (0x0003fffffffe0000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                              >> 3U))))) 
                                                       << 0x00000011U)) 
                                                   | (QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          << 0x0000000dU) 
                                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                            >> 0x00000013U))))))) 
                                          << 0x00000016U) 
                                         | ((IData)(
                                                    (((0x0003fffffffe0000ULL 
                                                       & ((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000012U))))) 
                                                          << 0x00000011U)) 
                                                      | (QData)((IData)(
                                                                        (0x0001ffffU 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                            >> 2U))))) 
                                                     >> 0x00000020U)) 
                                            << 4U)));
    __Vtemp_8[5U] = (((0x0000000fU & ((IData)(((0x0003fffffffe0000ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          >> 3U))))) 
                                                   << 0x00000011U)) 
                                               | (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                      << 0x0000000dU) 
                                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                        >> 0x00000013U))))))) 
                                      >> 0x0000000aU)) 
                      | ((IData)((((0x0003fffffffe0000ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                              >> 0x00000012U))))) 
                                       << 0x00000011U)) 
                                   | (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                         >> 2U))))) 
                                  >> 0x00000020U)) 
                         >> 0x0000001cU)) | ((0x003ffff0U 
                                              & ((IData)(
                                                         ((0x0003fffffffe0000ULL 
                                                           & ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U))))) 
                                                              << 0x00000011U)) 
                                                          | (QData)((IData)(
                                                                            (0x0001ffffU 
                                                                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                << 0x0000000dU) 
                                                                                | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000013U))))))) 
                                                 >> 0x0000000aU)) 
                                             | ((IData)(
                                                        (((0x0003fffffffe0000ULL 
                                                           & ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U))))) 
                                                              << 0x00000011U)) 
                                                          | (QData)((IData)(
                                                                            (0x0001ffffU 
                                                                             & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                << 0x0000000dU) 
                                                                                | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000013U)))))) 
                                                         >> 0x00000020U)) 
                                                << 0x00000016U)));
    __Vtemp_8[6U] = ((0x0000000fU & ((IData)((((0x0003fffffffe0000ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                          >> 3U))))) 
                                                   << 0x00000011U)) 
                                               | (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                      << 0x0000000dU) 
                                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                        >> 0x00000013U)))))) 
                                              >> 0x00000020U)) 
                                     >> 0x0000000aU)) 
                     | (0x003ffff0U & ((IData)((((0x0003fffffffe0000ULL 
                                                  & ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                            >> 3U))))) 
                                                     << 0x00000011U)) 
                                                 | (QData)((IData)(
                                                                   (0x0001ffffU 
                                                                    & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                        << 0x0000000dU) 
                                                                       | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                          >> 0x00000013U)))))) 
                                                >> 0x00000020U)) 
                                       >> 0x0000000aU)));
    __Vtemp_9[1U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__3__KET__)
                                ? ((0x0003fffffffe0000ULL 
                                    & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q))) 
                                       << 0x00000011U)) 
                                   | (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & ((vlSelfRef.__VdfgRegularize_he50b618e_0_67[2U] 
                                                          << 0x0000000aU) 
                                                         | (vlSelfRef.__VdfgRegularize_he50b618e_0_67[1U] 
                                                            >> 0x00000016U))))))
                                : ((0x0003fffffffe0000ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                              >> 3U))))) 
                                       << 0x00000011U)) 
                                   | (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                          << 0x0000000dU) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                            >> 0x00000013U)))))))) 
                      << 0x00000012U) | (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__2__KET__)
                                                   ? 
                                                  ((0x0003fffffffe0000ULL 
                                                    & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                                       << 0x00000011U)) 
                                                   | (QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_he50b618e_0_62 
                                                                                >> 0x00000024U))))))
                                                   : 
                                                  ((0x0003fffffffe0000ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                              >> 0x00000012U))))) 
                                                       << 0x00000011U)) 
                                                   | (QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                         >> 2U)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_9[2U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__3__KET__)
                                ? ((0x0003fffffffe0000ULL 
                                    & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q))) 
                                       << 0x00000011U)) 
                                   | (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & ((vlSelfRef.__VdfgRegularize_he50b618e_0_67[2U] 
                                                          << 0x0000000aU) 
                                                         | (vlSelfRef.__VdfgRegularize_he50b618e_0_67[1U] 
                                                            >> 0x00000016U))))))
                                : ((0x0003fffffffe0000ULL 
                                    & ((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                              >> 3U))))) 
                                       << 0x00000011U)) 
                                   | (QData)((IData)(
                                                     (0x0001ffffU 
                                                      & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                          << 0x0000000dU) 
                                                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                            >> 0x00000013U)))))))) 
                      >> 0x0000000eU) | ((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__3__KET__)
                                                    ? 
                                                   ((0x0003fffffffe0000ULL 
                                                     & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q))) 
                                                        << 0x00000011U)) 
                                                    | (QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.__VdfgRegularize_he50b618e_0_67[2U] 
                                                                           << 0x0000000aU) 
                                                                          | (vlSelfRef.__VdfgRegularize_he50b618e_0_67[1U] 
                                                                             >> 0x00000016U))))))
                                                    : 
                                                   ((0x0003fffffffe0000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                               >> 3U))))) 
                                                        << 0x00000011U)) 
                                                    | (QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                           << 0x0000000dU) 
                                                                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                             >> 0x00000013U))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x00000012U));
    __Vtemp_10[1U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__1__KET__)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_he50b618e_0_57 
                                                                  >> 0x00000012U))))))
                                 : ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                               >> 1U))))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                             >> 0x00000011U)))))))) 
                       << 0x00000012U) | (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__0__KET__)
                                                    ? 
                                                   ((0x0003fffffffe0000ULL 
                                                     & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))) 
                                                        << 0x00000011U)) 
                                                    | (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d)))
                                                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_4) 
                                                  >> 0x00000020U)));
    __Vtemp_10[2U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__1__KET__)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_he50b618e_0_57 
                                                                  >> 0x00000012U))))))
                                 : ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                               >> 1U))))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                             >> 0x00000011U)))))))) 
                       >> 0x0000000eU) | ((IData)((
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__1__KET__)
                                                     ? 
                                                    ((0x0003fffffffe0000ULL 
                                                      & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q))) 
                                                         << 0x00000011U)) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_he50b618e_0_57 
                                                                                >> 0x00000012U))))))
                                                     : 
                                                    ((0x0003fffffffe0000ULL 
                                                      & ((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U))))) 
                                                         << 0x00000011U)) 
                                                     | (QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                            << 0x0000000fU) 
                                                                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                              >> 0x00000011U))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000012U));
    __Vtemp_11[3U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__2__KET__)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_he50b618e_0_62 
                                                                  >> 0x00000024U))))))
                                 : ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                               >> 0x00000012U))))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (0x0001ffffU 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                          >> 2U))))))) 
                       << 4U) | ((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__1__KET__)
                                            ? ((0x0003fffffffe0000ULL 
                                                & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q))) 
                                                   << 0x00000011U)) 
                                               | (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__VdfgRegularize_he50b618e_0_57 
                                                                             >> 0x00000012U))))))
                                            : ((0x0003fffffffe0000ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                          >> 1U))))) 
                                                   << 0x00000011U)) 
                                               | (QData)((IData)(
                                                                 (0x0001ffffU 
                                                                  & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                      << 0x0000000fU) 
                                                                     | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                        >> 0x00000011U))))))) 
                                          >> 0x00000020U)) 
                                 >> 0x0000000eU));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
        __Vtemp_13[4U] = (((IData)((((QData)((IData)(
                                                     ((0x01fe0000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                                         >> 0x00000016U)))) 
                                                          << 0x00000011U)) 
                                                      | (0x0001ffffU 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[3U] 
                                                            >> 6U))))) 
                                     << 0x00000019U) 
                                    | (QData)((IData)(
                                                      ((0x01fe0000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                          >> 0x00000012U)))) 
                                                           << 0x00000011U)) 
                                                       | (0x0001ffffU 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                             >> 2U))))))) 
                           >> 0x0000001cU) | (__Vtemp_1[1U] 
                                              << 4U));
        __Vtemp_13[6U] = (0x000000ffU & (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[4U] 
                                                       >> 7U)))));
    } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en) {
        __Vtemp_13[4U] = __Vtemp_8[4U];
        __Vtemp_13[6U] = __Vtemp_8[6U];
    } else {
        __Vtemp_13[4U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__2__KET__)
                                     ? ((0x0003fffffffe0000ULL 
                                         & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 0x00000011U)) 
                                        | (QData)((IData)(
                                                          (0x0001ffffU 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_he50b618e_0_62 
                                                                      >> 0x00000024U))))))
                                     : ((0x0003fffffffe0000ULL 
                                         & ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                   >> 0x00000012U))))) 
                                            << 0x00000011U)) 
                                        | (QData)((IData)(
                                                          (0x0001ffffU 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                              >> 2U))))))) 
                           >> 0x0000001cU) | (__Vtemp_9[1U] 
                                              << 4U));
        __Vtemp_13[6U] = ((__Vtemp_9[2U] >> 0x0000001cU) 
                          | (0x003ffff0U & ((IData)(
                                                    (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__3__KET__)
                                                       ? 
                                                      ((0x0003fffffffe0000ULL 
                                                        & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q))) 
                                                           << 0x00000011U)) 
                                                       | (QData)((IData)(
                                                                         (0x0001ffffU 
                                                                          & ((vlSelfRef.__VdfgRegularize_he50b618e_0_67[2U] 
                                                                              << 0x0000000aU) 
                                                                             | (vlSelfRef.__VdfgRegularize_he50b618e_0_67[1U] 
                                                                                >> 0x00000016U))))))
                                                       : 
                                                      ((0x0003fffffffe0000ULL 
                                                        & ((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                                >> 3U))))) 
                                                           << 0x00000011U)) 
                                                       | (QData)((IData)(
                                                                         (0x0001ffffU 
                                                                          & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                              << 0x0000000dU) 
                                                                             | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 0x00000013U))))))) 
                                                     >> 0x00000020U)) 
                                            >> 0x0000000aU)));
    }
    __Vtemp_14[1U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                        << 0x00000010U) 
                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                           << 0x0000000aU) 
                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__int16_en_use)
                                     ? (((QData)((IData)(
                                                         (0x0001ffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                         << 0x00000021U) 
                                        | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)
                                     : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_msb)) 
                                         << 0x00000019U) 
                                        | (QData)((IData)(
                                                          (0x01ffffffU 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)))))))) 
                       << 0x00000012U) | (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                                    ? 
                                                   ((0x0003fffffffe0000ULL 
                                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                        << 0x00000011U)) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                        << 0x00000010U) 
                                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                           << 0x0000000aU) 
                                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                                    : 
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__int16_en_use)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                      << 0x00000021U) 
                                                     | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb)
                                                     : 
                                                    (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_msb)) 
                                                      << 0x00000019U) 
                                                     | (QData)((IData)(
                                                                       (0x01ffffffU 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb))))))) 
                                                  >> 0x00000020U)));
    __Vtemp_14[2U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                        << 0x00000010U) 
                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                           << 0x0000000aU) 
                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__int16_en_use)
                                     ? (((QData)((IData)(
                                                         (0x0001ffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                         << 0x00000021U) 
                                        | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)
                                     : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_msb)) 
                                         << 0x00000019U) 
                                        | (QData)((IData)(
                                                          (0x01ffffffU 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)))))))) 
                       >> 0x0000000eU) | ((IData)((
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                                     ? 
                                                    ((0x0003fffffffe0000ULL 
                                                      & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                         << 0x00000011U)) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                         << 0x00000010U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                            << 0x0000000aU) 
                                                                           | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                                     : 
                                                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__int16_en_use)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                       << 0x00000021U) 
                                                      | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)
                                                      : 
                                                     (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_msb)) 
                                                       << 0x00000019U) 
                                                      | (QData)((IData)(
                                                                        (0x01ffffffU 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000012U));
    __Vtemp_15[1U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                        << 0x00000010U) 
                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                           << 0x0000000aU) 
                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__int16_en_use)
                                     ? (((QData)((IData)(
                                                         (0x0001ffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                         << 0x00000021U) 
                                        | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)
                                     : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_msb)) 
                                         << 0x00000019U) 
                                        | (QData)((IData)(
                                                          (0x01ffffffU 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)))))))) 
                       << 0x00000012U) | (IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                                    ? 
                                                   ((0x0003fffffffe0000ULL 
                                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                        << 0x00000011U)) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                        << 0x00000010U) 
                                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                           << 0x0000000aU) 
                                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                                    : 
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__int16_en_use)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (0x0001ffffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                      << 0x00000021U) 
                                                     | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb)
                                                     : 
                                                    (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_msb)) 
                                                      << 0x00000019U) 
                                                     | (QData)((IData)(
                                                                       (0x01ffffffU 
                                                                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb))))))) 
                                                  >> 0x00000020U)));
    __Vtemp_15[2U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                        << 0x00000010U) 
                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                           << 0x0000000aU) 
                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__int16_en_use)
                                     ? (((QData)((IData)(
                                                         (0x0001ffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                         << 0x00000021U) 
                                        | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)
                                     : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_msb)) 
                                         << 0x00000019U) 
                                        | (QData)((IData)(
                                                          (0x01ffffffU 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)))))))) 
                       >> 0x0000000eU) | ((IData)((
                                                   ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                                     ? 
                                                    ((0x0003fffffffe0000ULL 
                                                      & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                         << 0x00000011U)) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                         << 0x00000010U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                            << 0x0000000aU) 
                                                                           | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                                     : 
                                                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__int16_en_use)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x0001ffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                       << 0x00000021U) 
                                                      | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)
                                                      : 
                                                     (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_msb)) 
                                                       << 0x00000019U) 
                                                      | (QData)((IData)(
                                                                        (0x01ffffffU 
                                                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000012U));
    __Vtemp_16[3U] = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                 ? ((0x0003fffffffe0000ULL 
                                     & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                        << 0x00000011U)) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                        << 0x00000010U) 
                                                       | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                           << 0x0000000aU) 
                                                          | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                 : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__int16_en_use)
                                     ? (((QData)((IData)(
                                                         (0x0001ffffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                         << 0x00000021U) 
                                        | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb)
                                     : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_msb)) 
                                         << 0x00000019U) 
                                        | (QData)((IData)(
                                                          (0x01ffffffU 
                                                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb)))))))) 
                       << 4U) | ((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                            ? ((0x0003fffffffe0000ULL 
                                                & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                   << 0x00000011U)) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                   << 0x00000010U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                      << 0x0000000aU) 
                                                                     | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                            : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__int16_en_use)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                    << 0x00000021U) 
                                                   | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb)
                                                : (
                                                   ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_msb)) 
                                                    << 0x00000019U) 
                                                   | (QData)((IData)(
                                                                     (0x01ffffffU 
                                                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit1__DOT__mul_int_lsb))))))) 
                                          >> 0x00000020U)) 
                                 >> 0x0000000eU));
    __Vtemp_16[6U] = ((__Vtemp_14[2U] >> 0x0000001cU) 
                      | (0x003ffff0U & ((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                                                   ? 
                                                  ((0x0003fffffffe0000ULL 
                                                    & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                                       << 0x00000011U)) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                       << 0x00000010U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                          << 0x0000000aU) 
                                                                         | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                                                   : 
                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__int16_en_use)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x0001ffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb 
                                                                                >> 0x00000020U)))))))) 
                                                     << 0x00000021U) 
                                                    | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb)
                                                    : 
                                                   (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_msb)) 
                                                     << 0x00000019U) 
                                                    | (QData)((IData)(
                                                                      (0x01ffffffU 
                                                                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_int_lsb))))))) 
                                                 >> 0x00000020U)) 
                                        >> 0x0000000aU)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__mul_bypass_en) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[0U] 
                = (IData)((((QData)((IData)(((0x01fe0000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                                >> 0x00000014U)))) 
                                                 << 0x00000011U)) 
                                             | (0x0001ffffU 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                                                   >> 4U))))) 
                            << 0x00000019U) | (QData)((IData)(
                                                              ((0x01fe0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                                                >> 0x00000010U)))) 
                                                                   << 0x00000011U)) 
                                                               | (0x0001ffffU 
                                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U]))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[1U] 
                = __Vtemp_2[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[2U] 
                = __Vtemp_2[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[3U] 
                = __Vtemp_3[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[4U] 
                = __Vtemp_13[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[5U] 
                = ((__Vtemp_1[1U] >> 0x0000001cU) | 
                   (__Vtemp_1[2U] << 4U));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int16_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[0U] 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_4);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[1U] 
                = ((0xfffc0000U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                   << 1U)) | (IData)(
                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_4 
                                                      >> 0x00000020U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[2U] 
                = (((IData)((0x00000001ffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                      >> 1U))))))) 
                    << 3U) | (7U & ((0x0003fffeU & 
                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                      << 1U)) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[0U] 
                                                 >> 0x0000001fU))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[3U] 
                = (((IData)(((0x0003fffffffe0000ULL 
                              & ((- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                        >> 0x00000012U))))) 
                                 << 0x00000011U)) | (QData)((IData)(
                                                                    (0x0001ffffU 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                        >> 2U)))))) 
                    << 4U) | (((IData)((0x00000001ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                 >> 1U))))))) 
                               >> 0x0000001dU) | ((IData)(
                                                          ((0x00000001ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                                                                >> 1U)))))) 
                                                           >> 0x00000020U)) 
                                                  << 3U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[4U] 
                = __Vtemp_13[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[5U] 
                = __Vtemp_8[5U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[0U] 
                = (IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__is_nan_in__BRA__0__KET__)
                            ? ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d)))
                            : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT____VdfgRegularize_ha48a0e22_0_4));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[1U] 
                = __Vtemp_10[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[2U] 
                = __Vtemp_10[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[3U] 
                = __Vtemp_11[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[4U] 
                = __Vtemp_13[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[5U] 
                = ((__Vtemp_9[1U] >> 0x0000001cU) | 
                   (__Vtemp_9[2U] << 4U));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[6U] 
            = __Vtemp_13[6U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[0U] 
            = (IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                        ? ((0x0003fffffffe0000ULL & 
                            ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                             << 0x00000011U)) | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                  << 0x00000010U) 
                                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                     << 0x0000000aU) 
                                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                        : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__int16_en_use)
                            ? (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb 
                                                                          >> 0x00000020U)))))))) 
                                << 0x00000021U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb)
                            : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_msb)) 
                                << 0x00000019U) | (QData)((IData)(
                                                                  (0x01ffffffU 
                                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit0__DOT__mul_int_lsb))))))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[2U] 
            = __Vtemp_15[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[3U] 
            = __Vtemp_16[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[4U] 
            = (((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)
                          ? ((0x0003fffffffe0000ULL 
                              & ((- (QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16))) 
                                 << 0x00000011U)) | (QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
                                                                      << 0x00000010U) 
                                                                     | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                                                         << 0x0000000aU) 
                                                                        | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0))))))
                          : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__int16_en_use)
                              ? (((QData)((IData)((0x0001ffffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb 
                                                                            >> 0x00000020U)))))))) 
                                  << 0x00000021U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb)
                              : (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_msb)) 
                                  << 0x00000019U) | (QData)((IData)(
                                                                    (0x01ffffffU 
                                                                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_int_lsb)))))))) 
                >> 0x0000001cU) | (__Vtemp_14[1U] << 4U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[5U] 
            = ((__Vtemp_14[1U] >> 0x0000001cU) | (__Vtemp_14[2U] 
                                                  << 4U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_rand_data[6U] 
            = __Vtemp_16[6U];
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__44(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__44\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata = 0;
    CData/*3:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata = 0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_ready));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__load_din) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__datin_info_d 
                = (0x007fffffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[2U] 
                                  >> 2U));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__load_din) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Yinfo_3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Yinfo_2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Yinfo_1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Yinfo_0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__dp2lut_Xinfo_0;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_sel;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_sel;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__NormalC2CubeEnd) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_width 
                = (0x0000000fU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                    << 0x00000014U) 
                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                      >> 0x0000000cU)) 
                                  - (IData)(1U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din_full) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter = 0U;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__mon_sat_cnt_nxt)
                    ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt_nxt);
            if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter 
                    = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_hybrid_counter_nxt)
                        ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter_nxt);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter 
                    = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_of_counter_nxt)
                        ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter_nxt);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter 
                    = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_uf_counter_nxt)
                        ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter_nxt);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter 
                    = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_only_le_hit_counter_nxt)
                        ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter_nxt);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter 
                    = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_only_lo_hit_counter_nxt)
                        ? 0xffffffffU : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter_nxt);
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_valid_rebuild) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_valid = 1U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_ready) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_valid = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__load_din) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__cube_end))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag)));
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_num1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_count;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_num1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_count;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_num0 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_count;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_num0 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_count;
            }
        }
        if ((IData)(((0x0001ec00U == (0x0001ec00U & 
                                      vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__p3_pipe_data[2U])) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__load_din)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__waiting_for_op_en = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__op_en_d1)) 
                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                       >> 2U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__waiting_for_op_en = 0U;
        }
        if (((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
               | (3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)) 
             | ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align;
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))) {
                if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align;
                } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align;
                }
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more) {
                if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__l2m_1stC_vld) 
                     & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align;
                }
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align;
            }
        }
        if (((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__is_pos_w_dly 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__is_pos_w_dly 
                = (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                  >> 8U));
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal) {
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
                }
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
                }
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
                }
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
                }
                if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
                }
                if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
                }
                if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
                }
                if ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
                if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
                    if ((0U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((1U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((2U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((3U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((4U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((5U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((6U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((7U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                               >> 8U)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] = 0U;
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[2U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                }
            } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here) 
                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))) {
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
                }
                if ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
                }
                if ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
                }
                if ((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
                }
                if ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
                }
                if ((5U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
                }
                if ((6U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
                }
                if ((7U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
                }
            } else {
                if ((IData)(((0U == (0x00000f00U & 
                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
                }
                if ((IData)(((0x00000100U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
                }
                if ((IData)(((0x00000200U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
                }
                if ((IData)(((0x00000300U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
                }
                if ((IData)(((0x00000400U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
                }
                if ((IData)(((0x00000500U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
                }
                if ((IData)(((0x00000600U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
                }
                if ((IData)(((0x00000700U == (0x00000f00U 
                                              & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))))) {
                    if ((IData)(((0U == (0x00000f00U 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000100U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000200U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000300U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000400U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000500U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000600U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                    if ((IData)(((0x00000700U == (0x00000f00U 
                                                  & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)))) {
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[0U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[1U] 
                            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[2U] 
                            = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
                if ((0U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((1U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((2U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((3U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((4U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((5U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((6U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
                if ((7U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                           >> 8U)))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] 
                        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] 
                        = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
                }
            }
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] = 0U;
            if ((0U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((1U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((2U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((3U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((4U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((5U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((6U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
            if ((7U == (0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                       >> 8U)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U]);
            }
        }
        if (((((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                >> 0x00000013U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)) 
              & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_bf_end))) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_end))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align 
                = (0x0000000fU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                    << 0x00000014U) 
                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                      >> 0x0000000cU)) 
                                  - (IData)(1U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                         >> 0x00000014U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                         >> 0x00000015U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                         >> 0x00000016U));
        } else if (((((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                       >> 0x00000013U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)) 
                     & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_bf_end))) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_end))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align = 0U;
        } else if ((((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                      >> 0x00000013U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din)) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__FIRST_C_bf_end)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align 
                = (7U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                         >> 0x00000010U));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d = 1U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d = 0U;
        }
        if (((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less))) {
            if ((((0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                  >> 8U)) == (0x0000000fU 
                                              & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                   << 0x00000014U) 
                                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                                     >> 0x0000000cU)) 
                                                 - (IData)(1U)))) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here = 1U;
            } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt) 
                         == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre)) 
                        & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here = 0U;
            }
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__NormalC2CubeEnd) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here = 1U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here = 0U;
        }
        if (((IData)(((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
                      & (0x004b0000U == (0x004f0000U 
                                         & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U])))) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre 
                = (0x0000000fU & (((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                    << 0x00000014U) 
                                   | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__nvdla_cdp_rdma2dp_pd[2U] 
                                      >> 0x0000000cU)) 
                                  - (IData)(1U)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_nex;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__datin_info_d = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_info_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_info_0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_width = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__sat_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_valid = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_num1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_num1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_num0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_num0 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__waiting_for_op_en = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_w_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__b_sync_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_dly1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__more2less_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__is_pos_w_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here_dly = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_02[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_12[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_22[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_32[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_42[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_52[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_62[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_72[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_align = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__pos_c_align = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_w_align = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_h_align = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_c_align = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_01[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_11[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_21[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_31[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_41[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_51[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_61[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_71[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_0[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_00[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_10[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_2[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_20[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_3[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_30[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_4[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_40[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_5[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_50[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_6[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_60[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_1stC_7[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_70[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__sqsum_bypass_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__reg2dp_sqsum_bypass));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__layer_flag 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__layer_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__wdma_layer_flag 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__wdma_layer_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__layer_flg 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__layer_flg;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_min 
                                                                              >> 0x00000025U))))) 
                                                  << 0x00000026U) 
                                                 | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_min);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__tozero_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__reg2dp_nan_to_zero));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cdp_rdma2dp_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_ready_flop)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data_vld 
        = ((~ (((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur_dly2)) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__less2more_dly2) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__is_pos_w_dly2) 
                      > (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_dly2)))) 
               | (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur_dly2)))) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buf_dat_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__data_info_in_rdy_d1)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d2)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p2__DOT__p2_pipe_valid))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__25__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__23__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__24__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__26__Vfuncout;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt 
        = (0x0000000fU & (((((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata)) 
                             + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                      >> 1U))) + (1U 
                                                  & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                                     >> 2U))) 
                           + (((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                      >> 3U)) + (1U 
                                                 & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                                    >> 4U))) 
                              + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                       >> 5U)))) + 
                          ((1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                  >> 6U)) + (1U & ((IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__idata) 
                                                   >> 7U)))));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__Vfuncout 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__Vstatic__ocnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_ele 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fun_bit_sum_8__27__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_max 
                                                                              >> 0x00000025U))))) 
                                                  << 0x00000026U) 
                                                 | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_max);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_max 
                                                                              >> 0x00000025U))))) 
                                                  << 0x00000026U) 
                                                 | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_lo_max);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_2)) 
                    << 0x00000022U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_1)) 
                                        << 0x00000011U) 
                                       | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_0)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[1U] 
        = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_3 
            << 0x00000013U) | (IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_2)) 
                                         << 0x00000022U) 
                                        | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_1)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_0)))) 
                                       >> 0x00000020U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[2U] 
        = ((0xfffffff0U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[2U]) 
           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_3 
              >> 0x0000000dU));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[2U] 
        = ((0x0000000fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_6)) 
                        << 0x00000022U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_5)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_4))))) 
              << 4U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_6)) 
                      << 0x00000022U) | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_5)) 
                                          << 0x00000011U) 
                                         | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_4))))) 
            >> 0x0000001cU) | ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_7 
                                << 0x00000017U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_6)) 
                                                              << 0x00000022U) 
                                                             | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_5)) 
                                                                 << 0x00000011U) 
                                                                | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_4)))) 
                                                            >> 0x00000020U)) 
                                                   << 4U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_rand_data[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_7 
                                           >> 9U)) 
                           | ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_6)) 
                                         << 0x00000022U) 
                                        | (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_5)) 
                                            << 0x00000011U) 
                                           | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_4)))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x007ffff0U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__ip2mul_pd_7 
                                                     >> 9U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[4U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[5U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[6U] 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_width) 
            << 0x0000001cU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_pos_w) 
                                << 0x00000018U) | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_data[6U]));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_data[7U] 
        = (0x0000007fU & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_last_c) 
                            << 6U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_last_h) 
                                      << 5U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_last_w) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_b_sync) 
                                                     << 3U) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buffer_pos_c)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__X_exp 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_function))));
    if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_60;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_61;
    } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_60;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_61;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_60 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_61 = 0U;
    }
    if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_50;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_51;
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_50;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_51;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_50 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_51 = 0U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_40;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_41;
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_40;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_41;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_40 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_41 = 0U;
    }
    if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_70;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_X_data_71;
    } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutY_sel))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_70;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lut_Y_data_71;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_70 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__lutX_data_71 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__layer_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_count 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_in_count;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_count 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__inf_in_count;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__buf_dat_vld)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p2_pipe_rand_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__data_info_in_rdy)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__data_info_in_vld))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__op_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                     >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy_d1)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_hybrid_counter_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_counter 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_hybrid_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_of_counter_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_counter 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_of_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_both_uf_counter_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_counter 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__both_uf_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_only_le_hit_counter_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_counter 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_le_hit_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__mon_only_lo_hit_counter_nxt 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter)) 
                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_ele))) 
                                 >> 0x00000020U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter_nxt 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_counter 
           + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__only_lo_hit_ele))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_load_all 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_ready) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_load 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_load_all) 
           & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here_dly)) 
              | (4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur_dly))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_rdy)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__data_info_in_vld))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_prdy 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_pvld_d)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_skid_ready_flop)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt 
        = vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__data_shift_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_valid_rebuild 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_ready_flop)
               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_valid)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_valid)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_skid_ready 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__hold_here)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din_full 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_valid_rebuild) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_catch 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_valid) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_ready_flop)) 
           & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_skid_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_ready 
        = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_valid)
                  ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_skid_ready)
                  : (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__load_din 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_valid_rebuild) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__p1_pipe_skid_ready));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2675 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre) 
                                                   == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__width_pre_cnt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_done 
        = ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__stat_cur)) 
           & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__cube_end_width_cnt) 
               == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__last_width)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_bufferin__DOT__rdma2dp_ready_normal)));
}

void Vsim___024root___nba_sequent__TOP__45(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__45\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_2 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_5 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_6 
        = (((QData)((IData)(((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                               << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                                         << 2U)) | 
                             (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15) 
                               << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14))))) 
            << 0x00000020U) | (QData)((IData)(((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                 << 0x0000001cU) 
                                                | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                    << 0x0000001bU) 
                                                   | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                      << 0x0000001aU))) 
                                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1) 
                                                   << 0x00000013U) 
                                                  | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0) 
                                                      << 0x00000012U) 
                                                     | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__d))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_3 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15) 
            << 0x0000000fU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__VdfgRegularize_h6e95ff9d_0_3270));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15) 
            << 0x0000000fU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__VdfgRegularize_h6e95ff9d_0_3272));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15) 
            << 0x0000000fU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__VdfgRegularize_h6e95ff9d_0_3274));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_2 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_5 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_pd_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15) 
            << 0x0000000fU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__VdfgRegularize_h6e95ff9d_0_3268));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_3 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_input_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_2) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datin_scale;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_shifter;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_datout_scale;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datin_scale;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_shifter;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_datout_scale;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_scale_use = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7 
        = (((QData)((IData)(((((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                                 << 3U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14))) 
                              << 5U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                         << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9))))) 
            << 0x0000002dU) | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8)) 
                                << 0x0000002cU) | (
                                                   ((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1)) 
                                                    << 0x00000025U) 
                                                   | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0)) 
                                                       << 0x00000024U) 
                                                      | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_6))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_3) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_input_rdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_2) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_0.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_1.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_3) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__data_info_in_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__din_pvld_d1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_input_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                      << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8)))) 
                    << 0x0000003eU) | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1)) 
                                        << 0x00000037U) 
                                       | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0)) 
                                           << 0x00000036U) 
                                          | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                       << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8)))) 
                     << 0x0000003eU) | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1)) 
                                         << 0x00000037U) 
                                        | (((QData)((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0)) 
                                            << 0x00000036U) 
                                           | vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_7))) 
                   >> 0x00000020U));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_pd[2U] 
        = (0x000000ffU & ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17) 
                            << 7U) | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                                      << 6U)) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                     << 4U) 
                                                    | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT____VdfgRegularize_h40690de8_0_4) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_4) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cvtin_o_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__cdp_cvtin_output_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__pipe_p3__DOT__p3_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cvtout_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__pipe_p4__DOT__p4_pipe_valid));
}

void Vsim___024root___nba_sequent__TOP__46(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__46\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr = 0;
    IData/*23:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count = 0;
    SData/*12:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_catch))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_dat_accept) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__beat_count 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_last_beat)
                    ? 0U : (0x00000fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__beat_count))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_accept) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_count 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_surf_end)
                    ? 0U : (0x00ffffffU & ((IData)(1U) 
                                           + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_count)));
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_cube_end) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count = 0U;
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_surf_end) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count 
                    = (0x00ffffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_dat_accept) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_last_beat))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_count 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_surf_last)
                    ? 0U : (0x00001fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_count))));
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_cube_last) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count = 0U;
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_surf_last) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count 
                    = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count)));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__wr_busy_in)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_pending) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_pending = 0U;
            }
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_wr_rsp_complete) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending = 1U;
            }
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_wr_rsp_complete) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_pending = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id)))) {
                if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending) {
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending = 0U;
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__load_cmd) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_size 
                = (0x00001fffU & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3113[4U] 
                                   << 2U) | (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3113[3U] 
                                             >> 0x0000001eU)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_repeat_number 
                = (0x00ffffffU & (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3112[3U] 
                                  >> 4U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_repeat_number 
                = (0x00ffffffU & (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3108 
                                          >> 0x00000016U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type 
                = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg2dp_addr;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_stride 
                = (0xffffffe0U & ((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3110[3U] 
                                   << 0x0000001cU) 
                                  | (0x0fffffe0U & 
                                     (vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__testInst_Data_reg_r0_287_32.__VdfgRegularize_h6e95ff9d_0_3110[2U] 
                                      >> 4U))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_stride 
                = (0xffffffe0U & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[1U] 
                                   << 0x0000000aU) 
                                  | (0x000003e0U & 
                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__csb_fifo__DOT__ram__DOT__r_nv_ram_rwsp_20x289__DOT__mbist_Do_r0_int_net[0U] 
                                      >> 0x00000016U))));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_accept) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_surf_end) {
                __Vtemp_2[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr);
                __Vtemp_2[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
                                         >> 0x00000020U));
                __Vtemp_2[2U] = 0U;
                __Vtemp_3[0U] = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_stride;
                __Vtemp_3[1U] = 0U;
                __Vtemp_3[2U] = 0U;
                VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__mon_surf_addr_c 
                    = (1U & __Vtemp_4[2U]);
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
                    = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
                       + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_stride)));
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_cmd_accept) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dat_en = 1U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_dat_accept) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__is_last_beat))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dat_en = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en = 1U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_ready) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_valid;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_rdy) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_vld 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_rsp_complete)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int)) 
                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_rsp_complete)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int = 0U;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int_d 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_prdy) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_cmd_valid 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_rd_pvld_int;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_csb__DOT__nvdla_bdma_cfg_status_0_stall_count_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__stl_cnt_cur 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__stl_cnt_nxt);
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_rdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_id;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_rdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_rdy) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_raw_vld;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__beat_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__line_count = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_cq__DOT__ld2st_wr_pvld_in = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_pending = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_size = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_repeat_number = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_repeat_number = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dat_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_vld = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__mon_surf_addr_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr = 0ULL;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__u_fifo_intr__DOT__fifo_intr_rd_pvld_int_d = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_cmd_valid = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__stl_cnt_cur = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_top_id = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__ack_bot_vld = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_busy_int)
                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_catch)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__lat_fifo__DOT__lat_fifo_wr_busy_int)
                : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_catch)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mcif2bdma_rd_rsp_ready)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cvif2bdma_rd_rsp_ready)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__bdma2cvif_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_rd_cdt_lat_fifo_pop) 
               & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_src_ram_type))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__bdma2mcif_rd_cdt_lat_fifo_pop 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_rd_cdt_lat_fifo_pop) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__reg_cmd_src_ram_type)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p4__DOT__p4_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p3__DOT__p3_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__surf_count;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_pending;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__mcif2bdma_wr_rsp_complete));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_wr_rsp_complete 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__cvif2bdma_wr_rsp_complete));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_surf_end 
        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__line_count 
           == vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_line_repeat_number);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__mc_dma_rd_req_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cv_dma_rd_req_vld 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mcif2bdma_rd_rsp_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__mc_dma_rd_rsp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cvif2bdma_rd_rsp_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_valid)) 
                 | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_ready)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cv_dma_rd_rsp_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__dma_wr_cmd_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__cmd_en) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_store__DOT__tran_cmd_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_rdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready_flop) 
            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type)) 
           | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_cmd_src_ram_type)) 
              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_cube_end 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_surf_end) 
           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__reg_surf_repeat_number 
              == vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__surf_count));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__mc_dma_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cv_dma_rd_req_vld)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_stall_inc 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_rdy)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_accept 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__dma_rd_req_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__cmd_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_valid)) 
                 | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__tran_accept) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_bdma__DOT__u_load__DOT__is_cube_end))));
}

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

void Vsim___024root___nba_sequent__TOP__47(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__47\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld = 0;
    // Body
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld = 1U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_data_rdy))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_data_rdy) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_oaddr_d 
                = (0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U]);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d 
                = (0x00000fffU & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U] 
                                     >> 5U)));
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_oaddr_d 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_oaddr_d));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d 
                = (0x00000fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop) 
             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[5U] 
                >> 0x00000011U))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop) 
             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U] 
                >> 5U))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__reg2dp_rubik_mode_drv2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_rubik_mode;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__reg2dp_in_precision_drv2 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_in_precision;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop_d) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_tmp[0x0000000fU];
        }
    } else {
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_oaddr_d = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_omask_d = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__reg2dp_rubik_mode_drv2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__reg2dp_in_precision_drv2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[1U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[2U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[3U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[4U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[5U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[6U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[7U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[8U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[9U] 
            = Vsim__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000aU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000bU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000cU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000dU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000eU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_data_raw_reg[0x0000000fU] 
            = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_osel_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dma_wr_data_vld;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_full 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr)) 
            >> 1U) & ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr)) 
                      == (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_full)) 
                 | (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_full)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_valid));
}

void Vsim___024root___nba_sequent__TOP__48(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__48\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt = 0;
    QData/*63:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w = 0;
    QData/*63:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c = 0;
    QData/*63:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    // Body
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_ready_bc))
                      : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_catch))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_nan_output_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_accept) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__reg_cube_last 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_cmd_require_ack;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__req_chn_size 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd) 
                         >> 8U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_beat_num_odd 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd)));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_accept) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__op_load) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__op_prcess = 1U;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__reg2dp_base_addr;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__reg2dp_base_addr;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__reg2dp_base_addr;
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__op_prcess = 0U;
            }
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_accept) {
                if ((IData)((0x5000U == (0x5000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd))))) {
                    __Vtemp_2[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w);
                    __Vtemp_2[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                                             >> 0x00000020U));
                    __Vtemp_2[2U] = 0U;
                    __Vtemp_3[0U] = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                     << 5U);
                    __Vtemp_3[1U] = 0U;
                    __Vtemp_3[2U] = 0U;
                    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_base_addr_w_c 
                        = (1U & __Vtemp_4[2U]);
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                           + (QData)((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                              << 5U))));
                }
                if ((0x00004000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd))) {
                    if ((0x00001000U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd))) {
                        __Vtemp_8[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w);
                        __Vtemp_8[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                                                 >> 0x00000020U));
                        __Vtemp_8[2U] = 0U;
                        __Vtemp_9[0U] = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                         << 5U);
                        __Vtemp_9[1U] = 0U;
                        __Vtemp_9[2U] = 0U;
                        VL_ADD_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_base_addr_c_c 
                            = (1U & __Vtemp_10[2U]);
                        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                               + (QData)((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                                  << 5U))));
                        __Vtemp_20[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w);
                        __Vtemp_20[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                                                  >> 0x00000020U));
                        __Vtemp_20[2U] = 0U;
                        __Vtemp_21[0U] = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                          << 5U);
                        __Vtemp_21[1U] = 0U;
                        __Vtemp_21[2U] = 0U;
                        VL_ADD_W(3, __Vtemp_22, __Vtemp_20, __Vtemp_21);
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_dma_req_addr_c 
                            = (1U & __Vtemp_22[2U]);
                        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
                               + (QData)((IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_dst_line_stride 
                                                  << 5U))));
                    } else {
                        __Vtemp_14[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c);
                        __Vtemp_14[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                                                  >> 0x00000020U));
                        __Vtemp_14[2U] = 0U;
                        __Vtemp_15[0U] = (0x000001e0U 
                                          & (((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd)) 
                                             << 5U));
                        __Vtemp_15[1U] = 0U;
                        __Vtemp_15[2U] = 0U;
                        VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_base_addr_c_c 
                            = (1U & __Vtemp_16[2U]);
                        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                               + (QData)((IData)((0x000001e0U 
                                                  & (((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd)) 
                                                     << 5U)))));
                        __Vtemp_26[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c);
                        __Vtemp_26[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                                                  >> 0x00000020U));
                        __Vtemp_26[2U] = 0U;
                        __Vtemp_27[0U] = (0x000001e0U 
                                          & (((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd)) 
                                             << 5U));
                        __Vtemp_27[1U] = 0U;
                        __Vtemp_27[2U] = 0U;
                        VL_ADD_W(3, __Vtemp_28, __Vtemp_26, __Vtemp_27);
                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_dma_req_addr_c 
                            = (1U & __Vtemp_28[2U]);
                        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
                               + (QData)((IData)((0x000001e0U 
                                                  & (((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd)) 
                                                     << 5U)))));
                    }
                } else {
                    __Vtemp_32[0U] = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr);
                    __Vtemp_32[1U] = (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                                              >> 0x00000020U));
                    __Vtemp_32[2U] = 0U;
                    __Vtemp_33[0U] = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer)
                                        ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dst_surface_stride
                                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dst_surface_stride) 
                                      << 5U);
                    __Vtemp_33[1U] = 0U;
                    __Vtemp_33[2U] = 0U;
                    VL_ADD_W(3, __Vtemp_34, __Vtemp_32, __Vtemp_33);
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_dma_req_addr_c 
                        = (1U & __Vtemp_34[2U]);
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                        = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
                           + (QData)((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer)
                                                ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dst_surface_stride
                                                : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dst_surface_stride) 
                                              << 5U))));
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_accept) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_nan_in_count = 0U;
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count = 0U;
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_nan_in_count 
                    = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count)) 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_num_in_64B))) 
                                             >> 0x00000020U))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count 
                    = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count 
                       + (IData)((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_num_in_64B))));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_last_beat) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_accept))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_en = 1U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_en = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_accept) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_en = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_en = 1U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_int) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_prdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pos_w_reg 
                = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pd) 
                         >> 1U));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_pvld_int) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_prdy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pos_w_reg = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d0_perf_write_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__stl_cnt_cur;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d0_perf_write_stall = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d1_perf_write_stall 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__stl_cnt_cur;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__dp2reg_done) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d1_perf_write_stall = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__dp2reg_consumer)
               ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d1_dma_en)
               : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_reg__DOT__reg2dp_d0_dma_en)) 
             & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_rdy)) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_wr_req_vld)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__stl_cnt_cur 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__stl_cnt_nxt);
        }
    } else {
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__op_prcess = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_nan_output_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__reg_cube_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_nan_in_count = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_en = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat_en = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_base_addr_w_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_base_addr_c_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__req_chn_size = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_beat_num_odd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pos_w_reg = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__mon_dma_req_addr_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d0_perf_write_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__dp2reg_d1_perf_write_stall = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__stl_cnt_cur = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__fp16_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))) 
           || (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__p1_skid_ready));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__nan_in_count;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_c;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__base_addr_w;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dma_req_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__layer_flag;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_last_beat 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__beat_cnt) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__cmd_fifo_rd_pos_w_reg));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h93b435ac_0_3 
        = (1U & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_last_beat) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__is_beat_num_odd))));
}

void Vsim___024root___nba_sequent__TOP__49(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__49\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr 
                = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr))
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__rd_adr_next_popping 
        = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_adr))
            ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_cmd_fifo__DOT__cmd_fifo_rd_adr))));
}

void Vsim___024root___nba_sequent__TOP__50(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__50\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_0__DOT__ro_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__51(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__51\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_1__DOT__ro_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__52(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__52\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_2__DOT__ro_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__53(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__53\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_preproc__DOT__u_ro_fifo_3__DOT__ro_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__54(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__54\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray_cntr 
                = (((IData)((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray_cntr) 
                              >> 1U) ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray__DOT__polarity))) 
                    << 1U) | (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray_cntr) 
                                    ^ (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray__DOT__polarity)))));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_count = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray_cntr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_count = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray__DOT__polarity 
        = (1U & VL_REDXOR_2(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_nvdla2csb__DOT__wr_popping_gray_cntr));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vsim__ConstPool__TABLE_h0ca67a14_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsim__ConstPool__TABLE_h29f79e0d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h49aa807a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h21594fac_0;
extern const VlUnpacked<CData/*5:0*/, 128> Vsim__ConstPool__TABLE_h9922d8a9_0;

void Vsim___024root___nba_sequent__TOP__55(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__55\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout;
    VL_ZERO_W(160, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum = 0;
    VlWide<5>/*159:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout;
    VL_ZERO_W(160, __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout);
    CData/*4:0*/ __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum;
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt = 0;
    SData/*12:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base = 0;
    QData/*58:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt = 0;
    IData/*17:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr = 0;
    // Body
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base;
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr;
    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dp2reg_done_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_req_stall_inc_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_rdy)) 
               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__wr_req_vld)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en_d 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en));
    __Vtableidx8 = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt_inc) 
                      << 4U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_hx_end) 
                                << 3U)) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if ((1U & Vsim__ConstPool__TABLE_h0ca67a14_0[__Vtableidx8])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt 
            = Vsim__ConstPool__TABLE_h29f79e0d_0[__Vtableidx8];
    }
    if ((2U & Vsim__ConstPool__TABLE_h0ca67a14_0[__Vtableidx8])) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_dx_cnt 
            = Vsim__ConstPool__TABLE_h49aa807a_0[__Vtableidx8];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open) 
             & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_done) 
                    & (~ (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain))))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open = 1U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr)));
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr = 0U;
        } else if (((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
                = (0x0000001cU & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt)) 
                                  << 2U));
        } else if ((((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                     & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
                = (0x0000001eU & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt)) 
                                  << 1U));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr)));
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr = 0U;
        } else if (((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
                = (0x0000001cU & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt)) 
                                  << 2U));
        } else if (((((1U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                      & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) 
                     & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
                = (0x0000001eU & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt)) 
                                  << 1U));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half = 0U;
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half = 0U;
        } else {
            if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_pop) 
                 & (~ (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__remain_data_size))
                         ? 1U : 3U) >> 1U)))) {
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half)));
            }
            if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push) 
                 & (~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__dma_wr_pd_mask) 
                       >> 1U)))) {
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half)));
            }
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half;
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_ordy_hold) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_int))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_ordy_hold = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_grp_end) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_int)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_ordy_hold = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_vld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_vld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_busy_in_int)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dma_wr_cmd_vld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__wr_busy_in)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld) 
                   & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__wr_busy_in)));
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt;
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt;
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy_hold) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_int))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy_hold = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_int)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy_hold = 1U;
        }
        if ((1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt = 0U;
        } else if ((((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                     | (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt;
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_end) 
                    | (((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                        & (~ (0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                                           >> 3U))))) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt 
                = (0x0003ffffU & ((IData)(1U) + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt;
        if ((1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_hx_end)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end)))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt = 0U;
        } else if (((((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                      & (0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                                      >> 3U)))) | (1U 
                                                   == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept))) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt)));
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inheight_mul_dy 
            = (0x0003ffffU & (((0x00003fffU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_datain_height))) 
                               * ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_y_stride))) 
                              - (IData)(1U)));
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_pop))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_dbuf_remain 
                = (1U & ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                           + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__push_size)) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__pop_size)) 
                         >> 4U));
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
                = (0x0000000fU & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                                   + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__push_size)) 
                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__pop_size)));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_push) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_dbuf_remain 
                = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__push_size)) 
                         >> 4U));
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                                  + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__push_size)));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_pop) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_dbuf_remain 
                = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__pop_size)) 
                         >> 4U));
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain) 
                                  - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__pop_size)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_done)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_pop) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_wr_dcnt_c 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt_inc) 
                             >> 0x0000000dU));
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_pop) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__last_wr_cmd 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                         >> 8U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_size 
                = (0x00003fffU & ((IData)(1U) + (0x00001fffU 
                                                 & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[2U] 
                                                     << 5U) 
                                                    | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_opdt[1U] 
                                                       >> 0x0000001bU)))));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_done)) 
                    & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd = 1U;
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain;
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt = 0U;
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_cmd_pop) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data = 1U;
            }
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dma_wr_data_pop) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt 
                    = (0x00001fffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt_inc));
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__odata_pvld_int) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_ordy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_open = 1U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_total_col_reg 
                = (0x0000007fU & ((IData)(1U) + (0x0000003fU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_opd))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_total_row_reg 
                = (0x0000007fU & ((IData)(1U) + (0x0000003fU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_opd) 
                                                    >> 6U))));
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_grp_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_open = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_done)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_rcnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt)) 
                             >> 6U));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_wr_rcnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt)) 
                             >> 5U));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_grp_end)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_done) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_gcnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt)) 
                             >> 0x0000000bU));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_wr_ccnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt)) 
                             >> 5U));
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end)))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_ccnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt)) 
                             >> 5U));
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_channel_end))))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_chn_cnt 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt_inc) 
                             >> 9U));
            }
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end))))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_chn_cnt 
                    = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt_inc) 
                             >> 9U));
            }
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_channel_end)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt 
                = (0x000001ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt_inc));
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt 
                = (0x000001ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt_inc));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d0_rd_stall_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d1_rd_stall_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d0_wr_stall_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d1_wr_stall_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_channel_end) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_done_hold)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dma_wr_cmd_vld_tmp = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dma_wr_cmd_vld_tmp = 1U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__odata_pvld_int) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_row_reg 
                = (0x0000003fU & ((IData)(1U) + (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_opd) 
                                                    >> 6U))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_col_reg 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_50)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_open = 1U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_open = 0U;
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end) 
              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_done_hold)) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_tmp = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_tmp = 1U;
        }
        if ((1U & (~ ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_end))))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_width_cnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt)) 
                             >> 0x0000000aU));
            } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end) 
                        | ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_width_cnt 
                    = (1U & (((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt)) 
                             >> 0x0000000aU));
            }
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                       | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end)) 
                      | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end))))) {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_width_cnt 
                    = (1U & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt)) 
                             >> 0x0000000aU));
            } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end) 
                        | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept)))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_width_cnt 
                    = (1U & (((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt)) 
                             >> 0x0000000aU));
            }
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__init_set) {
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base;
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dest_base;
            __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__src_base;
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_height_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_cbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_lbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_wbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_xbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))) 
                                             >> 0x0000003bU))));
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride))));
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_lbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_wbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_xbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))) 
                                             >> 0x0000003bU))));
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride))));
            } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end) 
                        | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_wbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                              + (QData)((IData)(
                                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                 << 1U)))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                                + (QData)((IData)(
                                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                   << 1U)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_xbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                              + (QData)((IData)(
                                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                 << 1U)))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                                + (QData)((IData)(
                                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                   << 1U)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                              + (QData)((IData)(
                                                                ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                 << 1U)))) 
                                             >> 0x0000003bU))));
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
                                                + (QData)((IData)(
                                                                  ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem) 
                                                                   << 1U)))));
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_hx_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_xbase_c 
                    = (1U & (IData)((1ULL & ((8ULL 
                                              + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
                    = (0x07ffffffffffffffULL & (8ULL 
                                                + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c 
                    = (1U & (IData)((1ULL & ((8ULL 
                                              + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base) 
                                             >> 0x0000003bU))));
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                    = (0x07ffffffffffffffULL & (8ULL 
                                                + vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base));
            } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_intern_stride))) 
                                             >> 0x0000003bU))));
                vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_intern_stride))));
            }
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_height_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_cbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_lbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_ybase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_wbase_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c 
                    = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                              + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))) 
                                             >> 0x0000003bU))));
                __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                    = (0x07ffffffffffffffULL & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
                                                + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride))));
            } else {
                if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_lbase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))));
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_wbase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))));
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))));
                } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_wbase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))));
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))));
                } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end) 
                            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end))) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_wbase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                                                  + (QData)((IData)(
                                                                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem) 
                                                                     << 1U)))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                            + (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem) 
                                               << 1U)))));
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                                                  + (QData)((IData)(
                                                                    ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem) 
                                                                     << 1U)))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
                            + (QData)((IData)(((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem) 
                                               << 1U)))));
                } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__intern_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__intern_stride))));
                }
                if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_end) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_ybase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_line_stride))));
                } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end) {
                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_ybase_c 
                        = (1U & (IData)((1ULL & ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                                                  + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))) 
                                                 >> 0x0000003bU))));
                    __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                        = (0x07ffffffffffffffULL & 
                           (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
                            + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride))));
                }
            }
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base;
    } else {
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rptr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wptr = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_half;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__fill_half = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_ordy_hold = 1U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_rd_cmd_fifo__DOT__idata_pvld_in = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rbk_rf_wr_cmd_fifo__DOT__idata_pvld_in = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datah_fifo__DOT__idata_pvld_in = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_datal_fifo__DOT__idata_pvld_in = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_cnt;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_cnt;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_ordy_hold = 1U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_cnt;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_cnt;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_cnt;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_wr_addr;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__inheight_mul_dy = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_dbuf_remain = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__mon_wr_dcnt_c = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_cmd_open;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dbuf_remain;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_cmd_open = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_wr_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_gcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_wr_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_rf_rd_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d0_rd_stall_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d1_rd_stall_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d0_wr_stall_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_d1_wr_stall_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dma_wr_cmd_vld_tmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_row_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_col_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_tmp = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_cmd_open = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_total_col_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rd_total_row_reg = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__last_wr_cmd = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_size = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_cbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_cbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_lbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_lbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_ybase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_wbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_xbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base = 0ULL;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_wbase_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base = 0ULL;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_wr_addr_c = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_line_base;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base 
            = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_chn_base;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__mon_rd_addr_c = 0U;
        __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr = 0ULL;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_base;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dy_base;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_line_base;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_chn_base;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_addr;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_busy_in 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__dma_wr_cmd_vld)
                ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_busy_next)
                : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__wr_reserving)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_busy_next)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rd_addr_tmp 
        = (0x0000001fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr), 3U) 
                          + VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr), 3U)));
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum 
        = (0x0000001fU & (- (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr)));
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] = 0xab49ca30U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] = 0xcdeb38bdU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] = 0x8820ffbbU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] = 0x28398a41U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] = 0x7b9ac5a9U;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] = 0x8a418820U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] = 0xc5a92839U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] = 0xca307b9aU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] = 0x38bdab49U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] = 0xffbbcdebU;
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
            = (((IData)((0x000000ffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
            = (((IData)((0x000000ffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                   >> 0x00000014U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                   >> 0x0000000aU));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                   >> 5U));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_rd_addr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_rd_addr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_rd_addr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_rd_addr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge8_rd_addr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__6__Vfuncout[4U];
    __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum 
        = (0x0000001fU & (- (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr)));
    if ((0x00000010U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] = 0xab49ca30U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] = 0xcdeb38bdU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] = 0x8820ffbbU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] = 0x28398a41U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] = 0x7b9ac5a9U;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] = 0x8a418820U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] = 0xc5a92839U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] = 0xca307b9aU;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] = 0x38bdab49U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] = 0xffbbcdebU;
    }
    if ((8U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
            = (((IData)((0x000000ffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                   >> 8U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
            = (((IData)((0x000000ffffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                   >> 0x00000020U)) 
                          << 0x00000018U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U];
    }
    if ((4U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                   >> 0x00000014U));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                   >> 0x00000014U));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U];
    }
    if ((2U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                   >> 0x0000000aU));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                   >> 0x0000000aU));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U];
    }
    if ((1U & (IData)(__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__snum))) {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[0U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[1U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[2U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[3U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                   >> 5U));
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[4U] 
            = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                   >> 5U));
    } else {
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U];
        __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[4U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_rd_addr_shift[0U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_rd_addr_shift[1U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_rd_addr_shift[2U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_rd_addr_shift[3U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split8_rd_addr_shift[4U] 
        = __Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__9__Vfuncout[4U];
    VL_COND_WIWW(160, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__merge16_rd_addr_shift, 
                 (0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr)), 
                 ([&]() {
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum 
                    = (0x0000001fU & (- VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr), 1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? 0xeb59ce31U : 0xca518c21U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? 0xddef39bdU : 0xd5ad2939U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? 0x8c21fffbU : 0xce317bdaU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? 0x2939ca51U : 0x39bdeb59U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? 0x7bdad5adU : 0xfffbddefU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                               >> 0x00000020U)) 
                                      << 0x00000018U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout[0U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout[1U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout[2U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout[3U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout[4U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U]);
            }(), vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__7__Vfuncout), 
                 ([&]() {
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum 
                    = (0x0000001fU & (- VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr), 1U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? 0xa9494a10U : 0x88410800U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? 0xcd6b18b5U : 0xc5290831U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? 0x0800f7b9U : 0x4a107398U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? 0x08318841U : 0x18b5a949U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? 0x7398c529U : 0xf7b9cd6bU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                               >> 0x00000020U)) 
                                      << 0x00000018U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout[0U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout[1U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout[2U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout[3U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout[4U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U]);
            }(), vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__8__Vfuncout));
    VL_COND_WIWW(160, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__split16_rd_addr_shift, 
                 (1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr)), 
                 ([&]() {
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum 
                    = (0x0000001fU & (- (0x0000001eU 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? 0xf5ace718U : 0xe528c610U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? 0xeef79cdeU : 0x6ad6949cU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? 0xc610fffdU : 0xe718bdedU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? 0x949ce528U : 0x9cdef5acU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? 0xbded6ad6U : 0xfffdeef7U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                               >> 0x00000020U)) 
                                      << 0x00000018U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout[0U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout[1U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout[2U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout[3U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout[4U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U]);
            }(), vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__10__Vfuncout), 
                 ([&]() {
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum 
                    = (0x0000001fU & (- (0x0000001eU 
                                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__rf_rd_addr))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? 0xd4a4a508U : 0xc4208400U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? 0xe6b58c5aU : 0x62948418U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? 0x84007bdcU : 0xa50839ccU);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? 0x8418c420U : 0x8c5ad4a4U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                    = ((0x00000010U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? 0x39cc6294U : 0x7bdce6b5U);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            << 0x00000018U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U] 
                                               >> 8U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                    = ((8U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U]))))) 
                            >> 8U) | ((IData)(((0x000000ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[0U])))) 
                                               >> 0x00000020U)) 
                                      << 0x00000018U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf0[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                    = ((4U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[0U] 
                            << 0x0000000cU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U] 
                                               >> 0x00000014U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf1[4U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[1U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[2U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[3U]);
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                    = ((2U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[0U] 
                            << 0x00000016U) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U] 
                                               >> 0x0000000aU))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf2[4U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout[0U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout[1U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[1U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout[2U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[2U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout[3U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[3U]);
                vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout[4U] 
                    = ((1U & (IData)(vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__snum))
                        ? ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[0U] 
                            << 0x0000001bU) | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U] 
                                               >> 5U))
                        : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__Vstatic__shf3[4U]);
            }(), vlSelfRef.__Vfunc_tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__shift160_5b__11__Vfuncout));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt 
                = (0x0000003fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt_inc));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt_inc));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_grp_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt 
                = (0x000007ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt_inc));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_col_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_cdt_lat_fifo_pop) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt_inc));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_col_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_vld) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt 
                = (0x0000001fU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt_inc));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_perf_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_nxt);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur 
                = (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_nxt);
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_end)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt 
                = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_cwdth_cnt_inc));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_plar_end) 
                    | ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_accept)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt 
                = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_mwdth_cnt_inc));
        }
        if ((1U & (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en)) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_end)) 
                   | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_mwdth_end)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt = 0U;
        } else if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_dx_end) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt 
                = (0x000003ffU & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_cnt_inc));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_plar_end) 
                    | ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_accept)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt 
                = (0x000003ffU & ((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_13)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_intr__DOT__dp2reg_done) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_done_hold = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_done_hold = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en = 0U;
        } else {
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_channel_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_done_hold = 1U;
            }
            if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_channel_end) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_done_hold = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_op_en_reg))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_intern_stride 
                = ((0U != (3U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride) 
                                 >> 3U))) ? (0x0000003fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride)))
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_line_stride);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem 
                = (0x000000fcU & (((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride)) 
                                  << 2U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__intern_stride 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_contract_stride_0;
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_intern_stride 
                = ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_planar_stride
                    : 0x00000040U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem 
                = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))
                    ? 1U : 2U);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__intern_stride 
                = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_planar_stride
                    : 0x00000040U);
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride 
            = (((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                | (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)))
                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_daout_surf_stride
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_daout_surf_stride)
                : ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))
                    ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_planar_stride 
                       << 5U) : (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_daout_planar_stride 
                                 << 4U)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride 
            = (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_contract_stride_0 
               * ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_deconv_x_stride)));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem 
            = ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0))
                ? ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))
                    ? 1U : 2U) : 4U);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride 
            = (((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)) 
                | (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_rubik_mode_drv0)))
                ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__dp2reg_consumer)
                    ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d1_dain_surf_stride
                    : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_d0_dain_surf_stride)
                : ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__reg2dp_in_precision_drv0))
                    ? (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_planar_stride 
                       << 5U) : (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_regfile__DOT__reg2dp_dain_planar_stride 
                                 << 4U)));
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__stl_cnt_cur = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_req_done_hold = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_req_done_hold = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_intern_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_width_stridem = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__out_chn_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__cubey_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__intern_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__width_stridem = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__chn_stride = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt_inc 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_dx_cnt)));
    __Vtableidx9 = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_col_reg;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__mon_wr_tcol_c 
        = Vsim__ConstPool__TABLE_h21594fac_0[__Vtableidx9];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__wr_total_colm 
        = Vsim__ConstPool__TABLE_h9922d8a9_0[__Vtableidx9];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__remain_data_size 
        = (0x00003fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__send_data_size) 
                          - (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_data_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in 
        = __Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__rbk_dma_wr_cmd_fifo__DOT__idata_pvld_in;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt_inc 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_rcnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt_inc 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_rcnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt_inc 
        = (0x00000fffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_gcnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt_inc 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_wr_ccnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt_inc 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_ctrl__DOT__rf_rd_ccnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_ext 
        = (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_inc 
        = (0x00000003ffffffffULL & (1ULL + (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_cur))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__wr_req_stall_inc_d) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_mod 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_inc;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_new 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_mod;
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_mod 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_ext;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_new 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_ext;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_nxt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__dp2reg_done_d)
            ? 0ULL : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_wr_req__DOT__stl_cnt_new);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_cwdth_cnt_inc 
        = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_mwdth_cnt_inc 
        = (0x000007ffU & ((IData)(8U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__wr_width_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_cwdth_cnt_inc 
        = (0x000007ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT____VdfgRegularize_h9424502e_0_13 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rd_width_cnt;
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__init_set 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en_d)) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_seq_gen__DOT__rubik_en));
}

void Vsim___024root___nba_sequent__TOP__56(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__56\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_in_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__rd_adr_next_popping 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_NV_NVDLA_PDP_cal1d_info_fifo__DOT__pdp_info_out_adr)));
}

void Vsim___024root___nba_sequent__TOP__57(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__57\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_cq__DOT__ig2cq_count = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h820c8f7a_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsim__ConstPool__TABLE_hbd41eb92_0;

void Vsim___024root___nba_sequent__TOP__58(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__58\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray__DOT__polarity) 
                     << 5U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray_cntr) 
                                << 2U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing) 
                                           << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_))));
    if (Vsim__ConstPool__TABLE_h820c8f7a_0[__Vtableidx1]) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray_cntr 
            = Vsim__ConstPool__TABLE_hbd41eb92_0[__Vtableidx1];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray__DOT__polarity 
        = (1U & VL_REDXOR_4(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_csb_master__DOT__u_fifo_csb2nvdla__DOT__rd_pushing_gray_cntr));
}

void Vsim___024root___nba_sequent__TOP__59(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__59\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
                = ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr))));
        }
        if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_count_next;
        } else if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_adr_next_popping;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_adr_next_popping 
        = ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr))));
}

void Vsim___024root___nba_sequent__TOP__60(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__60\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts))) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr 
                = ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr))));
        }
        if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_count_next;
        } else if (((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__src_dat_gnts)) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_adr_next_popping;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__arb2spt_dat_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__rd_adr_next_popping 
        = ((4U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr))
            ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_ig__DOT__u_spt__DOT__u_dfifo__DOT__dfifo_rd_adr))));
}

void Vsim___024root___nba_sequent__TOP__61(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__61\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr;
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_count_p = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_count = 0U;
        }
    } else {
        vlSelfRef.__Vdly__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_wr_count = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__rd_adr_next_popping 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_cq__DOT__cq_rd_adr)));
}

void Vsim___024root___nba_sequent__TOP__62(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__62\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_13 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_6 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_8 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_23 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_3 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__vlds_out)) 
            << 1U) | (0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__vlds_out)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_14 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_13));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_7 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_9 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_8));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_24 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_23));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_4 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__vlds_out)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_15 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_14));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_in_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_out_vld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_9));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_25 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_24));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__FMcvt_out_vld 
        = (((0x0000001fU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__vlds_out)) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT____VdfgRegularize_hcfa81255_0_4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_16 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_15));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_25));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_17 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_16));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_26));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_18 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_17));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_27));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_19 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_18));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_28));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_20 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_19));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 8U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_29));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_21 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 9U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_20));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 9U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_30));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_22 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 0x0000000aU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_21));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 0x0000000aU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_31));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 0x0000000bU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_22));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_dout_pvld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 0x0000000bU) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32));
}

void Vsim___024root___nba_sequent__TOP__63(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__63\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_99 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_144 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_138 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_140 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_20 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_51 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_52 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_53 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out0_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_0.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out1 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out1_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out2 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out2_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out3 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out3_vld 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_a_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_b_rdy 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__u_HLS_fp17_pooling_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_152 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_148 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_146 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_156 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_154 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mul_pad_line_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 1U) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mul_pad_line_in_rdy_d2)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p6__DOT__p6_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p4__DOT__p4_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__din_rdy_d3)) 
                     | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p3__DOT__p3_pipe_valid))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_100 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2.__PVT__HLS_fp17_to_fp16_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_99));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_145 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_144));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_139 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_138));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_141 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_140));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_21 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_20) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_25 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_52) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_6 = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_53));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_b_rdy) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_b_rdy) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_b_rdy) 
                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_b_rdy) 
                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_a_rdy) 
                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in3_a_rdy) 
                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in0_a_rdy) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_a_rdy))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_9 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out0_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out1_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_10 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out2_vld) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out3_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_a_rdy) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_prdy 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_b_rdy) 
           & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_b_rdy) 
              & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_b_rdy) 
                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_b_rdy) 
                    & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_a_rdy) 
                       & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in3_a_rdy) 
                          & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in0_a_rdy) 
                             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_a_rdy))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_153 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_152));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_149 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_148));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_147 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_146));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_157 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_156));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_155 
        = ((((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
             & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_154));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp17T16_out_vld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_3.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_100));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_145));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_in_a_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_139));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_in_b_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_141));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_22 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_21) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_55 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_9 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_b_rdy) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_87 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_a_rdy)))))))) 
            << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in_prdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_11 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_13 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_15 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_17 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_19 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_21 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_0) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_8 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_10) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out1_vld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_23 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_153));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_149));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_147));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_157));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_155));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mul_pad_line_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_valid) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mulw_prdy 
        = ((0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_in_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_in_b_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_23 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_22) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_5 = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_55));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_8) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out0_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_9));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_88 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_a_rdy)))))))) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_87));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_11));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_13));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_15));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_17));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_19));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_21));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_1) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out_pvld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_8) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out0_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_7 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_23));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_rdy 
        = ((0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_rdy 
        = ((0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
           & (0x0000000fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_24 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_23) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_54 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_93 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_out0_vld)) 
            << 1U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_out_pvld));
    vlSelfRef.__VdfgRegularize_he50b618e_0_8 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_b_rdy) 
                                                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_89 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_a_rdy)))))))) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_88));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_10 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_12 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_14 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_16 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_18 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_20 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_2) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_a_rdy));
    vlSelfRef.__VdfgRegularize_he50b618e_0_22 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_b_rdy) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_7));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_94 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out0_vld)) 
            << 2U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_93));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_0__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_8));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_90 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_a_rdy)))))))) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_89));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_1__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_10));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_12));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_14));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_16));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_18));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_20));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_3) 
           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in2_b_rdy));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT____VdfgRegularize_h202a30a0_0_6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in1_a_rdy) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_22));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_95 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out0_vld)) 
            << 3U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_94));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_91 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_in1_a_rdy)))))))) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_90));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_96 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_4__DOT__fp16_add_out0_vld)) 
            << 4U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_95));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_92 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_b_rdy) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_b_rdy) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_b_rdy) 
                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_b_rdy) 
                      & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in2_a_rdy) 
                         & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in3_a_rdy) 
                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in0_a_rdy) 
                               & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_in1_a_rdy)))))))) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_91));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_97 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_5__DOT__fp16_add_out0_vld)) 
            << 5U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_96));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_4add_in_prdy 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_in_prdy) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_92));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_98 
        = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT____VdfgRegularize_h202a30a0_0_8) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_6__DOT__fp16_add_out0_vld)) 
            << 6U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_97));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_4add_out_pvld 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_7__DOT__fp16_add_out_pvld) 
            << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_98));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_add_out_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p4__DOT__p4_pipe_valid) 
           & (0x000000ffU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_4add_out_pvld)));
}

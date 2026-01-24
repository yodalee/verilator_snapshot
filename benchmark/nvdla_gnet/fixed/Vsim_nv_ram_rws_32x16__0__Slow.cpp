// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we = 
        ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr)) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re = 
        ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr)) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x0000001bU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 5U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x00000016U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x0000000aU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x00000011U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x0000000fU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x00000014U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 7U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                         >> 0x00000019U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 2U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                         >> 0x0000001eU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x0000001dU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 3U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x00000018U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 8U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x00000013U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 0x0000000dU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x0000000eU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 0x00000012U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 9U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                         >> 0x00000017U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                         >> 0x0000001cU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000001fU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 1U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000001aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 6U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x00000015U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x0000000bU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000000bU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x00000015U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 6U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                         >> 0x0000001aU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 1U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                         >> 0x0000001fU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x0000001cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 4U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x00000017U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 9U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x00000012U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 0x0000000eU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x0000000dU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 0x00000013U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                         >> 0x00000018U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 3U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                         >> 0x0000001dU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000001eU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 2U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x00000019U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 7U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x00000014U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x0000000cU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000000fU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x00000011U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000000aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x00000016U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
                = (0x0000ffffU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 5U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                         >> 0x0000001bU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
            = (0x0000ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

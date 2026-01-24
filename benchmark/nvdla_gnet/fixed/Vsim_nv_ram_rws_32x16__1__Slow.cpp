// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr) 
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
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
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we;
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
            = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re;
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

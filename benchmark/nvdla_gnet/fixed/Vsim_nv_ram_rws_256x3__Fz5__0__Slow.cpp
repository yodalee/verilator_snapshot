// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rws_256x3__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net;
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_pd;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
            = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x3__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net;
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_pd;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing;
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
            = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x3__Fz5___ctor_var_reset(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->di = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11324760403304891329ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17034703532553835413ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199956848524148686ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176886221250372823ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8989959262760658205ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17916202859083766859ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13847949254490121858ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9877049761512353367ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5319312059479395331ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6918822539942192792ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3544619258951982828ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7763129486181469599ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1264972809152198422ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 553224214686403400ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5101642175759362172ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6937331512816795464ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14953954432434841084ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9757468006089150435ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18052537358675867071ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1610311573442218809ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5682267464558476381ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1278146711626277239ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7634441376517293809ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11131650043764357365ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__RA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 863656661286286236ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15096289855608947046ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9947019957624084495ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14709856518287449488ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546493017986248957ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13615346686384090914ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15439721714815757548ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9679649547231609825ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15890798112361863964ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6285595999540025701ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8962641715703881731ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6221583515974453694ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9052289801024554192ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15695684437559025717ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6927127800125129241ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13815478684840833850ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7018722406565550602ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10206320469623011261ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15885754457890718256ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18004473992498585374ull);
    vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1006953154271500926ull);
    vlSelf->r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569402754923811795ull);
    vlSelf->r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13824305004376033789ull);
    vlSelf->r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1701943007490817715ull);
    vlSelf->r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2025037196640227409ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3071 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11370867434925241376ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3072 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2313593440961828325ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3073 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2276453868797409169ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3074 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4101760582472645948ull);
    vlSelf->__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9434307052398881071ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17258917125463312930ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18233658569834666799ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17551904029467239374ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6252690333617522602ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13804097508473401901ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 622837813293159390ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5251244642332341771ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 = 0;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_64x116___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_64x116___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                 >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                            & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                               >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0;
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__3(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__5(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 6U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 7U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 8U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 9U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000000fU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000010U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000011U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000012U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000013U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000014U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000015U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000016U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000017U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000018U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x00000019U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000001aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000001bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000001cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000001dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
                 >> 0x0000001eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
           >> 0x0000001fU);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U]);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 6U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 7U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 8U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 9U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000000fU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000010U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000011U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000012U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000013U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000014U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000015U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000016U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000017U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000018U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x00000019U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000001aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000001bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000001cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000001dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
                 >> 0x0000001eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
           >> 0x0000001fU);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U]);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 6U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 7U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 8U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 9U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000000fU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000010U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000011U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000012U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000013U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000014U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000015U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000016U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000017U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000018U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x00000019U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000001aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000001bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000001cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000001dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
                 >> 0x0000001eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
           >> 0x0000001fU);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U]);
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 6U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 7U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 8U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 9U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000eU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x0000000fU));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x00000010U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x00000011U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x00000012U));
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
                 >> 0x00000013U));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__6(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__7(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[0U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[1U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[2U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr[3U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0;
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__10(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__11(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0)));
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__12(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U]);
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__13(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__14(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__3(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__15(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0)));
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
               | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__5(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__6(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__7(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__10(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__11(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__12(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 1U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 1U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 2U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 2U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 3U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 3U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 4U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 4U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 5U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 5U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                 | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                       >> 6U))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 6U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

void Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
            | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re)) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
              >> 7U));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__2(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[3U];
    }
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__4(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 7U));
}

void Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__8(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
}

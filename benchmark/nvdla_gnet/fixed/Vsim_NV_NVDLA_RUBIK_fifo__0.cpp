// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_RUBIK_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__mbist_ramaccess_rst_ = 0U;
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__disable_asserts 
        = (0U != VL_TESTPLUSARGS_I("disable_nv_clk_gate_asserts"s));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim_NV_NVDLA_RUBIK_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9e67c271_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9e67c271_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9e67c271_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9e67c271_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9e67c271_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9e67c271_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9e67c271_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9e67c271_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR) 
              >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR)))))) 
         & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[0U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[1U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[2U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[3U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[4U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[5U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[6U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U];
        vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[7U] 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U];
        if ((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF))) {
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[0U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[1U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[2U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[3U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[4U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[5U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[6U];
            vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U] 
                = vlSelfRef.ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0[7U];
            vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0 
                = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF;
            vlSelfRef.__VdlySet__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__1(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__idata_pvld_in = vlSelfRef.__PVT__idata_pvld_in;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__wr_busy_in_int)))) {
            vlSelfRef.__Vdly__idata_pvld_in = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h) 
                                               & (~ (IData)(vlSelfRef.__PVT__wr_busy_in)));
        }
    } else {
        vlSelfRef.__Vdly__idata_pvld_in = 0U;
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__2(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSelfRef.__PVT__rd_enable) | (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSelfRef.__PVT__ore) & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__mbist_ce_r0_1p) 
                  & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))));
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__ore)) 
                   | (IData)(vlSelfRef.__PVT__wr_popping)) 
                  | (IData)(vlSelfRef.__PVT__rd_pushing)) 
                 | (((IData)(vlSelfRef.__PVT__idata_busy_int) 
                     != (IData)(vlSelfRef.__PVT__idata_busy_next)) 
                    | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy) 
                       & (IData)(vlSelfRef.__PVT__odata_pvld_int)))));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__3(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0;
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__4(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__5(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__6(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__7(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__SO_int_net = vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__8(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__idata_busy_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && (IData)(vlSelfRef.__PVT__idata_busy_next));
    vlSelfRef.__PVT__odata_pvld_int = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                       && ((IData)(vlSelfRef.__PVT__odata_pvld_p) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h8709d9ae_0_0)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__idata_adr = vlSelfRef.__PVT__wr_adr_next;
        }
        if (vlSelfRef.__PVT__ore) {
            vlSelfRef.__PVT__odata_adr = vlSelfRef.__PVT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__idata_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__idata_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__rd_pushing) | (IData)(vlSelfRef.__PVT__ore))) {
            vlSelfRef.__PVT__odata_count_p = ((IData)(vlSelfRef.__PVT__ore)
                                               ? (IData)(vlSelfRef.__PVT__rd_count_p_next_rd_popping)
                                               : (IData)(vlSelfRef.__PVT__rd_count_p_next_no_rd_popping));
            vlSelfRef.__PVT__odata_pvld_p = vlSelfRef.__PVT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.__PVT__rd_pushing) 
                    | (IData)(vlSelfRef.__PVT__ore))) {
            vlSelfRef.__PVT__odata_count_p = 0U;
            vlSelfRef.__PVT__odata_pvld_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__idata_adr = 0U;
        vlSelfRef.__PVT__odata_adr = 0U;
        vlSelfRef.__PVT__idata_count = 0U;
        vlSelfRef.__PVT__odata_count_p = 0U;
        vlSelfRef.__PVT__odata_pvld_p = 0U;
    }
    vlSelfRef.__PVT__wr_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__idata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__idata_adr))));
    vlSelfRef.__PVT__rd_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__odata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__odata_adr))));
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__ore));
    vlSelfRef.__PVT__rd_pushing = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_count_p_next_rd_popping = (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__rd_pushing)
                                                       ? (IData)(vlSelfRef.__PVT__odata_count_p)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__odata_count_p) 
                                                       - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__odata_count_p) 
                          + (IData)(vlSelfRef.__PVT__rd_pushing)));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__9(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0;
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[0U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[1U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[2U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[3U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[4U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[5U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[6U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_l[7U];
        } else {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
            = vlSelfRef.__PVT__idata_pd_in[0U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
            = vlSelfRef.__PVT__idata_pd_in[1U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
            = vlSelfRef.__PVT__idata_pd_in[2U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
            = vlSelfRef.__PVT__idata_pd_in[3U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
            = vlSelfRef.__PVT__idata_pd_in[4U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
            = vlSelfRef.__PVT__idata_pd_in[5U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
            = vlSelfRef.__PVT__idata_pd_in[6U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
            = vlSelfRef.__PVT__idata_pd_in[7U];
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__10(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__11(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0)));
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__12(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__13(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.__PVT__wr_busy_in)) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h))) {
        if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x00000010U])) {
            vlSelfRef.__PVT__idata_pd_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0U];
            vlSelfRef.__PVT__idata_pd_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[1U];
            vlSelfRef.__PVT__idata_pd_in[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[2U];
            vlSelfRef.__PVT__idata_pd_in[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[3U];
            vlSelfRef.__PVT__idata_pd_in[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[4U];
            vlSelfRef.__PVT__idata_pd_in[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[5U];
            vlSelfRef.__PVT__idata_pd_in[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[6U];
            vlSelfRef.__PVT__idata_pd_in[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[7U];
        } else {
            vlSelfRef.__PVT__idata_pd_in[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__idata_pd_in[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__idata_pd_in[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__idata_pd_in[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__idata_pd_in[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__idata_pd_in[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__idata_pd_in[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__idata_pd_in[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__wr_busy_in)) 
                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h))) {
        vlSelfRef.__PVT__idata_pd_in[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__idata_pd_in[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__idata_pd_in[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__idata_pd_in[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__idata_pd_in[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__idata_pd_in[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__idata_pd_in[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__idata_pd_in[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__1(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__14(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[0U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][0U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[0U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[1U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][1U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[1U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[2U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][2U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[2U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[3U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][3U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[3U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[4U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][4U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[4U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[5U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][5U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[5U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[6U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][6U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[6U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout[7U] 
            = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
                 ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
                [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][7U]
                 : Vsim__ConstPool__CONST_h9e67c271_0[7U]) 
               & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__2(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h8709d9ae_0_0 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy)) 
                                                & (IData)(vlSelfRef.__PVT__odata_pvld_int));
    vlSelfRef.__PVT__ore = ((~ (IData)(vlSelfRef.__VdfgRegularize_h8709d9ae_0_0)) 
                            & (IData)(vlSelfRef.__PVT__odata_pvld_p));
    vlSelfRef.__PVT__rd_count_p_next_not_0 = ((IData)(vlSelfRef.__PVT__ore)
                                               ? (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_rd_popping))
                                               : (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.__PVT__rd_enable = ((IData)(vlSelfRef.__PVT__rd_count_p_next_not_0) 
                                  & ((~ (IData)(vlSelfRef.__PVT__odata_pvld_p)) 
                                     | (IData)(vlSelfRef.__PVT__ore)));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__3(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSelfRef.__PVT__idata_adr));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__15(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_busy_in = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
                                   && ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h)
                                        ? (IData)(vlSelfRef.__PVT__idata_busy_next)
                                        : ((IData)(vlSelfRef.__PVT__idata_pvld_in) 
                                           & ((~ (IData)(vlSelfRef.__PVT__wr_reserving)) 
                                              & (IData)(vlSelfRef.__PVT__idata_busy_next)))));
    vlSelfRef.__PVT__idata_pvld_in = vlSelfRef.__Vdly__idata_pvld_in;
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__16(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][6U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0][7U] 
            = vlSelfRef.__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U];
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__17(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0;
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__4(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_busy_in_int = ((IData)(vlSelfRef.__PVT__idata_busy_int) 
                                       & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__idata_busy_int)) 
                                     & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0x0000007fU & ((IData)(vlSelfRef.__PVT__idata_count) 
                        + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__idata_busy_next = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                        & (0x50U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (0x0000007fU & 
                                      ((IData)(vlSelfRef.__PVT__wr_popping)
                                        ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                            ? (IData)(vlSelfRef.__PVT__idata_count)
                                            : ((IData)(vlSelfRef.__PVT__idata_count) 
                                               - (IData)(1U)))
                                        : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__5(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSelfRef.__PVT__ore)
                          ? (IData)(vlSelfRef.__PVT__rd_adr_next)
                          : (IData)(vlSelfRef.__PVT__odata_adr)));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__18(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0)));
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__6(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q))))
            : (IData)(vlSelfRef.__PVT__wr_reserving));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__7(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r)))
            : (IData)(vlSelfRef.__PVT__rd_enable));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__8(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__9(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__10(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__11(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9e67c271_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9e67c271_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9e67c271_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9e67c271_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9e67c271_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9e67c271_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9e67c271_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9e67c271_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__12(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK));
}

void Vsim_NV_NVDLA_RUBIK_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9e67c271_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9e67c271_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9e67c271_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9e67c271_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9e67c271_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9e67c271_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9e67c271_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9e67c271_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__9(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0;
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[0U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[1U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[2U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[3U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[4U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[5U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[6U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_pd_h[7U];
        } else {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[0U] 
            = vlSelfRef.__PVT__idata_pd_in[0U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[1U] 
            = vlSelfRef.__PVT__idata_pd_in[1U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[2U] 
            = vlSelfRef.__PVT__idata_pd_in[2U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[3U] 
            = vlSelfRef.__PVT__idata_pd_in[3U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[4U] 
            = vlSelfRef.__PVT__idata_pd_in[4U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[5U] 
            = vlSelfRef.__PVT__idata_pd_in[5U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[6U] 
            = vlSelfRef.__PVT__idata_pd_in[6U];
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr[7U] 
            = vlSelfRef.__PVT__idata_pd_in[7U];
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__12(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.__PVT__wr_busy_in)) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h))) {
        if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x00000010U])) {
            vlSelfRef.__PVT__idata_pd_in[0U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[8U];
            vlSelfRef.__PVT__idata_pd_in[1U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[9U];
            vlSelfRef.__PVT__idata_pd_in[2U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000aU];
            vlSelfRef.__PVT__idata_pd_in[3U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000bU];
            vlSelfRef.__PVT__idata_pd_in[4U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000cU];
            vlSelfRef.__PVT__idata_pd_in[5U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000dU];
            vlSelfRef.__PVT__idata_pd_in[6U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000eU];
            vlSelfRef.__PVT__idata_pd_in[7U] = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dma__DOT__rd_rsp_pd[0x0000000fU];
        } else {
            vlSelfRef.__PVT__idata_pd_in[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__idata_pd_in[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__idata_pd_in[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__idata_pd_in[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__idata_pd_in[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__idata_pd_in[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__idata_pd_in[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__idata_pd_in[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__wr_busy_in)) 
                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__fifo_idata_valid_h))) {
        vlSelfRef.__PVT__idata_pd_in[0U] = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.__PVT__idata_pd_in[1U] = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.__PVT__idata_pd_in[2U] = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.__PVT__idata_pd_in[3U] = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.__PVT__idata_pd_in[4U] = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.__PVT__idata_pd_in[5U] = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.__PVT__idata_pd_in[6U] = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.__PVT__idata_pd_in[7U] = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__2(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
}

void Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__8(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd));
}

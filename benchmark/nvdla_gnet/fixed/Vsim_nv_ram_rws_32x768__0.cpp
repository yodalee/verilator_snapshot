// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_32x768___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_32x768___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                 >> 5U)) | ((~ (3U 
                                                & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                   >> 5U))) 
                                            & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                               >> 5U)))))) 
         & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_ce_r0_0_0_1p)));
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__2(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576;
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__3(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__4(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__5(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__6(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__7(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_255_0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__8(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[0U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[1U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[2U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[3U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[4U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr[5U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0;
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__9(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_ce_r0_0_0_1p = 0U;
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__10(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q));
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__11(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576)));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__12(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__13(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__14(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__2(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__3(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__15(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576)));
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__4(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__5(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__6(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__7(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__8(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__9(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__10(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__11(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__12(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__13(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__14(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__3(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__4(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__6(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__12(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 1U));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__13(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__14(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__3(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__4(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__6(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__12(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 2U));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__13(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
    }
}

void Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__14(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__3(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__4(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__6(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__12(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 3U));
}

void Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__13(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
    }
}

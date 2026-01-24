// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_32x544___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_32x544___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF)) 
                                 >> 5U)) | ((~ (3U 
                                                & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                                   >> 5U))) 
                                            & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR) 
                                               >> 5U)))))) 
         & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[6U];
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[7U];
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__2(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__mbist_ce_r0_0_0_1p)));
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__3(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288;
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__5(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__6(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__7(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[6U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][6U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout[7U] 
            = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][7U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__8(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_31_0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__9(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[0U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[1U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[2U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[3U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[4U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[5U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[6U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr[7U] 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0;
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__10(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__mbist_ce_r0_0_0_1p = 0U;
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__11(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync;
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q));
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__12(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__13(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][6U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][7U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__14(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__2(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__3(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 4U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__15(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3258[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_4_d1[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__5(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__6(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_4[0x00000010U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__7(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__8(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__9(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__10(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK))));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__11(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__12(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 4U));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__13(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 4U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__3(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 5U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3259[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_5_d1[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__6(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_5[0x00000010U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__12(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 5U));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__13(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 5U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__3(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 6U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3260[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_6_d1[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__9(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_6[0x00000010U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__12(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 6U));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__13(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 6U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__3(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 7U));
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__4(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_287_32->__VdfgRegularize_h6e95ff9d_0_3261[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_543_288->Q[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_7_d1[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__9(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_7[0x00000010U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U];
    }
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__12(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 7U));
}

void Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__13(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 7U));
    }
}

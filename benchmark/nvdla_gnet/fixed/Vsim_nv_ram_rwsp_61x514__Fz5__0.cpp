// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rwsp_61x514__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK) 
              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF) 
                 >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK)) 
                            & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR) 
                               >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[6U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[7U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[8U];
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK) 
              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF) 
                 >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK)) 
                            & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR) 
                               >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK))) {
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[2U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[3U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[4U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[5U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[6U];
        vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[7U];
        vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 
            = (0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF));
        vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__mbist_ce_r0_0_0_1p))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288;
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[0U] 
                 >> 1U));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[0U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[1U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[2U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[3U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[4U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[5U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[6U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[7U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr[8U] 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0;
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h5b979003_0;

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[0U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[0U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[1U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[1U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[2U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[2U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[3U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[3U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[4U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[4U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[5U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[5U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[6U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[6U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr[7U] 
        = (Vsim__ConstPool__CONST_h5b979003_0[7U] & 
           vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U]);
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__mbist_ce_r0_0_0_1p = 0U;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_288_q));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[6U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[7U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[0U]);
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][6U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0][7U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U];
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[6U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[7U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[8U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x00000010U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[1U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[1U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[1U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[2U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[2U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[2U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[3U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[3U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[3U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[3U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[4U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[4U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[4U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[4U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[5U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[5U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[5U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[5U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[6U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[6U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[6U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[6U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[7U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[7U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[7U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[7U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[8U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[8U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[8U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[8U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[9U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[9U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[9U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[9U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000aU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000aU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000bU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000bU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000cU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000cU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000dU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000dU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000eU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000eU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x0000000fU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x0000000fU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_ready_flop)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p1__DOT__p1_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_ready_flop)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_pipe_data[0x00000010U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_p2__DOT__p2_skid_data[0x00000010U])));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_288_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__21(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][3U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[3U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][4U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[4U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][5U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[5U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][6U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[6U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][7U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[7U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0][8U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0[8U];
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_288__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__mbist_ce_r0_0_0_1p))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[6U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout[7U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[0U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[1U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[2U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[3U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[4U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[5U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[6U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[7U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout[8U] 
            = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
               [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
               & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__lat_rd_pd[0x00000010U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[1U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[2U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[3U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[4U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[5U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[6U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[7U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[8U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[9U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__p5_pipe_data[0x00000010U];
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_288_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0)));
    }
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_288__DOT__qd));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR))][8U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK))));
}

void Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR))][7U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK))));
}

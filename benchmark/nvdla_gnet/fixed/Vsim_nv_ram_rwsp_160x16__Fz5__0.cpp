// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rwsp_160x16__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rwsp_160x16__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd0 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd1 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd))))) {
        vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h82714ed0__0 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 
                = vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h82714ed0__0;
            vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)))) {
        vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h82714ed0__0 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 
                = vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h82714ed0__0;
            vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0;
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000fU));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 5U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 6U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 7U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 8U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 9U));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                 >> 0x0000000eU));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pd)
                : 0U) : (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__ig2eg_cube_end) 
                          << 0x0000000fU) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__dma_req_size)));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__re_q));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0)));
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__13(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__14(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout 
            = ((((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                           >> 1U)))
                  ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
                 [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                  >> 1U))] : 0U) & 
                (- (IData)(((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK))))) 
               | (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                             >> 1U)))
                    ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                    >> 1U))] : 0U) 
                  & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR))))));
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__15(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0;
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__16(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0;
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__17(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__18(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0)));
    }
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd0 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK)))));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd1 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)))));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr)));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_enable));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd0 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd1 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                             >> 1U))] : 0U) & (- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                                          & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pd)
                : 0U) : (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__ig2eg_cube_end) 
                          << 0x0000000fU) | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__dma_req_size)));
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr)));
}

void Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_enable));
}

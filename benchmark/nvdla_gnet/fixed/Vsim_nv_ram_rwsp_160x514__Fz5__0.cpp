// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rwsp_160x514__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rwsp_160x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd))))) {
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[0U];
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[1U];
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0[2U];
            vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
         & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd)) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)))) {
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                                      >> 1U)))) {
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[0U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[0U];
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[1U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[1U];
            vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[2U] 
                = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0[2U];
            vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0 
                = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                                  >> 1U));
            vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 1U;
        }
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__mbist_ce_r0_0_0_1p))));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_144_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_432_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_0_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_144_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_288_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_432_q 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432;
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB)));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0->__PVT__ITOP__DOT__dout[0U] 
                 >> 1U));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[0U] 
        = ((vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
            << 0x00000010U) | (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                               >> 0x00000010U));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[1U] 
        = ((vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
            << 0x00000010U) | (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                               >> 0x00000010U));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr[2U] 
        = (0x0003ffffU & ((vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                           << 0x00000010U) | (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                                              >> 0x00000010U)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0;
    vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__mbist_ce_r0_0_0_1p = 0U;
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_432_q));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432)));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__dout[0U] 
            = ((((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                           >> 1U)))
                  ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
                 [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                  >> 1U))][0U] : 0U) 
                & (- (IData)(((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK))))) 
               | (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                             >> 1U)))
                    ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                    >> 1U))][0U] : 0U) 
                  & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__dout[1U] 
            = ((((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                           >> 1U)))
                  ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
                 [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                  >> 1U))][1U] : 0U) 
                & (- (IData)(((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK))))) 
               | (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                             >> 1U)))
                    ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                    >> 1U))][1U] : 0U) 
                  & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR))))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__dout[2U] 
            = ((((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                           >> 1U)))
                  ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
                 [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                  >> 1U))][2U] : 0U) 
                & (- (IData)(((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK))))) 
               | (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                             >> 1U)))
                    ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                    >> 1U))][2U] : 0U) 
                  & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR))))));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X144_0_0->__PVT__ITOP__DOT__dout[0U]);
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0[2U];
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][0U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[0U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][1U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[1U];
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[vlSelfRef.__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0][2U] 
            = vlSelfRef.__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0[2U];
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk))))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR 
            = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0;
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x00000010U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[1U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[2U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[3U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[4U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[5U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[6U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[7U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[8U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[9U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_432_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432)));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_FF));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][0U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][1U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (((0x4fU >= (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                                      >> 1U))) ? vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr
            [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR) 
                             >> 1U))][2U] : 0U) & (- (IData)(
                                                             ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK) 
                                                              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd 
        = (IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR) 
                    >> 7U) & (0U != (0x60U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR)))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)) 
              & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK) 
           & ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd)) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF)));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
               : ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__mbist_ce_r0_0_0_1p))));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x00000010U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[1U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[2U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[3U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[4U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[5U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[6U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[7U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[8U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[9U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_432_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0)
                : 0U) : ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                          ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr)));
}

void Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
}

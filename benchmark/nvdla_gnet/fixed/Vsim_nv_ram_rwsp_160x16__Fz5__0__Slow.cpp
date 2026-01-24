// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving;
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_enable;
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving;
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_enable;
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x16__Fz5___ctor_var_reset(Vsim_nv_ram_rwsp_160x16__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_160x16__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->di = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8606167351697416622ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13914950793035744362ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3560982581093177818ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3811919157635130316ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15852261126356694325ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17478077040004129546ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17337735871365011824ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6258994482777381931ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10154599072874945310ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4145623209622459085ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8182639473332637969ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 332940236064767439ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16748446696019787362ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476382212991621052ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16351376188852271127ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1146028387472290363ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14937863583617150877ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8162363054684931924ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 246312323315890611ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3145038298235010434ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8415546448683100463ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9054002586357121322ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17733689728220007648ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12209042517307550607ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9652863935419454865ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10898863915603893789ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15430749495607756139ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17107632906432049048ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14682434175267711526ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12257969707138047831ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10544195413440378762ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17975360330918005295ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3512153894848191059ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6574726071949392366ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12541842746210729621ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16771726795957191584ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1715730984052024724ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RD_rdnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13495297934581624061ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10371341819279179613ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1830530514654259181ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100378491969845829ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14530754851956284641ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__rmuxd1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 30970972250563332ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3719116357428164416ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9366793347142499882ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 946840073666602999ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h82714ed0__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 129228791573223415ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13710764235214258787ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8111118450046838221ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h82714ed0__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15170954422778852206ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7557442556071677252ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4982621448859909567ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14867546405704068697ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1491737842271639157ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16843849421157003685ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2244207378500738872ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5871178112225335147ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8292776264956123636ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5461472663399499497ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5404222879655684469ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14206585687031456829ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5199531644317816198ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11207064385653258876ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883637182773225914ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6991115981346939201ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 694365241185563020ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6947543980653833512ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1673613328865755145ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16446902942665320207ull);
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15144641869072751637ull);
    vlSelf->__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18106682338065659279ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14678321839336886035ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12097810760465441953ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3572624820152165381ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 0;
}

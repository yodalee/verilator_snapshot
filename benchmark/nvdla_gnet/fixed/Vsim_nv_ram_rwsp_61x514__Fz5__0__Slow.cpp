// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h61b15e54_0;

VL_ATTR_COLD void Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 = 0U;
        }
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
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
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 = 0U;
        }
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
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
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_61x514__Fz5___ctor_var_reset(Vsim_nv_ram_rwsp_61x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_nv_ram_rwsp_61x514__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312933968894800155ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12127529763854486979ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7754790276349295634ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5832024224643312155ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12329461593484829192ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2578749792139054848ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__pre_muxed_Di_w0_B, __VscopeHash, 18374412507039947509ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Di_w0, __VscopeHash, 14365879137620611285ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4667450274501749896ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14749860529527690723ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13824650342579959846ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17998197673891707353ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10942052629365087415ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4292982566307025344ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6533835011063589369ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 848128341700891174ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17589275527422634063ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 440582393690390561ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5018808285802981066ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16325314200478189319ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15757950879162217328ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084382391336084054ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7158530237306039625ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17420197074612228963ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16352785000611624957ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7983518461149723901ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14913890644077766695ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3637969009728522199ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8632107408183757561ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15809608597482966192ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16777044011966638182ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_gate_core_0_288__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6558954308259527935ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17790182222942018631ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14485352666476563020ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16952801133634566778ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16998639456088349902ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17221048305162885019ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8329022387404426254ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 128176465372297061ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5684099606873057133ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11441242247123511060ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8986802880138062832ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5015439133370065521ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13194956581284457915ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4530414945959561539ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 17164383381157405417ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__dout, __VscopeHash, 2503720121622412148ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11457902348437925487ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11961048077746662335ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7525407022774044587ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 17415949493776361434ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 13359341674343183130ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10135811949030310153ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17071246937325544438ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18261362314703783098ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13971614975695756853ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4299583228457102452ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15421231483234628670ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17893407818879437067ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14035649169970054774ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11772052576431457180ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9925665437062195481ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3790350564532337674ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17651939316657994231ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3138352033734763083ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 756385296404388893ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 8764910394361409271ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__dout, __VscopeHash, 14275445404589389267ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11946611715068585201ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7832936722947288264ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6174910194229225874ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 8599482700128780882ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 3256906072701639901ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15666059706047150828ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4331449754830207724ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14926333655633823801ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4112832573824789181ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10027365007152144506ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8602619682245284179ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357887767850204491ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11610020972362896829ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694699325776603732ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1185407075417154097ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8431718822934626618ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13923456484939316860ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554474400196717342ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5767630066721096040ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18120300452905150432ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4612948489573084332ull);
    vlSelf->__PVT__r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12988165421839500988ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14224999301364916065ull);
    vlSelf->r_nv_ram_rwsp_61x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14928554893596543044ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 17357960457742531231ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15414645294891093594ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__VdlyVal__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 13961240549647937261ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13593485643073607102ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_61x514__DOT__ram_Inst_61X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

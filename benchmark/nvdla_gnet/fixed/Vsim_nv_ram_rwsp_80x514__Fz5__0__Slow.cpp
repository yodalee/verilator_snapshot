// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h61b15e54_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h9a2fc1c8_0;
extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h1e22d3d3_0;

VL_ATTR_COLD void Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_80x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][8U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[8U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_80x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__lat_ecc_rd_pd[0x00000010U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[1U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[2U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[3U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[4U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[5U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[6U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[7U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[8U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[9U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_80x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_alu.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_288__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_288_q))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0[8U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR][8U]
             : Vsim__ConstPool__CONST_h9a2fc1c8_0[8U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h1e22d3d3_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_80x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_nv_ram_rwsp_80x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__lat_ecc_rd_pd[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[1U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[1U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[1U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[2U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[2U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[2U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[3U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[3U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[3U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[3U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[3U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[4U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[4U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[4U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[4U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[4U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[5U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[5U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[5U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[5U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[5U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[6U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[6U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[6U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[6U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[6U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[7U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[7U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[7U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[7U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[7U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[8U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[8U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[8U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[8U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[8U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[9U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[9U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[9U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[9U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[9U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000aU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000aU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000aU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000aU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000aU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000bU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000bU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000bU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000bU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000bU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000cU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000cU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000cU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000cU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000cU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000dU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000dU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000dU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000dU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000dU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000eU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000eU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000eU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000eU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000eU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x0000000fU] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x0000000fU]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x0000000fU])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x0000000fU]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x0000000fU])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0[0x00000010U] 
            = (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__mc_dma_rd_rsp_vld))) 
                & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_ready)
                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_pipe_data[0x00000010U]
                    : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p3__DOT__p3_skid_data[0x00000010U])) 
               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__cv_dma_rd_rsp_vld))) 
                  & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_ready)
                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_pipe_data[0x00000010U]
                      : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__pipe_p4__DOT__p4_skid_data[0x00000010U])));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_80x514__Fz5___ctor_var_reset(Vsim_nv_ram_rwsp_80x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vsim_nv_ram_rwsp_80x514__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17773198039633763583ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18388246776275439508ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180385209016142835ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3702415868406150412ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9537432863624515232ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10440927123324794192ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__pre_muxed_Di_w0_B, __VscopeHash, 17379397324937942135ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Di_w0, __VscopeHash, 17395441008094373482ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11667662247164616424ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10197390275569481026ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5719028930761270640ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2047968131297625235ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 599291113587031440ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371655683088552776ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9236638208567147228ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15770409304730462108ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4389761340355913010ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3038818284023862642ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4710811447295321759ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 191023390258272210ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14427779209193038792ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9359748184871514493ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825975212569798597ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10986846997843082784ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8787398378201439239ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15010778941094709550ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9938775928853061397ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 846141268088557975ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16528008817147823149ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12867816058251015439ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5841694376504317553ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_gate_core_0_288__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4161761131980538781ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 867203576877952911ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12991745826043795056ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11046299564273187688ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15607739222191744632ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5882741108195388045ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7321895434626658275ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 565876931465999357ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185716430072486287ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8123428637979792284ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6024008511253160108ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18388601515605982701ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9626812365170313135ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 810423775537693223ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__dout, __VscopeHash, 5760182378332366617ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6226555654612358293ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144440442710017829ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15841804051309707607ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 14439044563446465074ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(288, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 7082290944610797382ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3376932502136739312ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h42cbd457__0, __VscopeHash, 3463556773682949885ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17953334249209465332ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 930607927071228969ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3433296317039297426ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15266398267266231919ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13552685391933089681ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15274297390874013213ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13738727310091857035ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6925871402804212884ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6177485906609348485ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17830313686473345104ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14024092458354284237ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1910712529635077544ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10498172710217356297ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 13922229939569852617ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__dout, __VscopeHash, 14543772628550207112ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13469673500882920134ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9497976358122226660ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10427668824867290965ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 15846321379527056891ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(226, vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 5456767737365019033ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7422361655450304167ull);
    VL_SCOPED_RAND_RESET_W(226, vlSelf->r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h132e63f1__0, __VscopeHash, 15141526482935526408ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964133339109400703ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17322906245610978364ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14153749597046286354ull);
    vlSelf->__PVT__r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18141946263238201838ull);
    vlSelf->r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12515171891120967758ull);
    vlSelf->r_nv_ram_rwsp_80x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8490820467790690618ull);
    VL_SCOPED_RAND_RESET_W(288, vlSelf->__VdlyVal__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 11954345793681558394ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14712221707867061907ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X288_0_0__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    VL_SCOPED_RAND_RESET_W(226, vlSelf->__VdlyVal__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 5722207593127344863ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12357275497412381868ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_80x514__DOT__ram_Inst_80X226_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

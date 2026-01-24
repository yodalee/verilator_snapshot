// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h61b15e54_0;

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0)
                : 0U);
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
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
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 = 0U;
        }
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0)
                : 0U);
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving;
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__1\n"); );
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
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h61b15e54_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 = 0U;
        }
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
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 
            = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next)
                : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr));
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
        vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_enable) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
}

VL_ATTR_COLD void Vsim_nv_ram_rwsp_160x514__Fz5___ctor_var_reset(Vsim_nv_ram_rwsp_160x514__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_nv_ram_rwsp_160x514__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15510849641427990251ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12216196893637295373ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17148152692305443507ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8538406079275293542ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1637716312060106708ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026455726340355240ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__pre_muxed_Di_w0_B, __VscopeHash, 16321279230232059027ull);
    VL_SCOPED_RAND_RESET_W(514, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Di_w0, __VscopeHash, 5805443698989715682ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14539885723739000552ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3150151658857203708ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3973386171656132550ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16065071054311350145ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5680874793959634543ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376047180956324992ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_144_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5107709951529983837ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15366186461636902909ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1812116456213572433ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_we_w0_0_432 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 936562921343942279ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__we_0_432_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11840179353541944444ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3049431620990237080ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2244832727199480403ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5999965171027713346ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2272414375700751797ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5099671977892078449ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__access_en_r_0_432 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4204684050247301976ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9676920579482481746ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12431598427336922726ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 720968787917072136ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_144_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15106758541698750640ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6541741780058574173ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10505880162006732524ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__muxed_re_r0_0_432 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6526155781704080265ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__re_0_432_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9346820303501689293ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14590416148455790478ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4893509620817392902ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11915482717533272743ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 186284665352773994ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9992628326834998220ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14058794576023071566ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8581674136040117442ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10516571459020804194ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_gate_core_0_432__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7761965911446021172ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1911495965780654025ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662787032892086407ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4537278851138683851ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5421568610743601753ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9010961837626523933ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14759273077511094966ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4971177979161225759ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7642430861622404398ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1447628788653883256ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17370430402010423843ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14293964932757752707ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14497304147946747563ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 5682204357216376818ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__dout, __VscopeHash, 14305374878815613657ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__RD_rdnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1847361356496245296ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__empadd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4767631593131713531ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16892919601350952336ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__WrClk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11408978657523831284ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 663485233901419083ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__rmuxd1, __VscopeHash, 3089522342029658695ull);
    vlSelf->r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13378290506035507577ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 10638647119301734445ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 85986154714191156ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h426b507c__0, __VscopeHash, 15439690745353722569ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(82, vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr[__Vi0], __VscopeHash, 3283747468878300373ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8394774139567006626ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h426b507c__0, __VscopeHash, 13278302199805276358ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325182519321546629ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7259859737303056888ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6117812589603707447ull);
    vlSelf->__PVT__r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11882526884343957097ull);
    vlSelf->r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2326428627953358832ull);
    vlSelf->r_nv_ram_rwsp_160x514__DOT__testInst_Data_reg_r0_1_0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2153524900236696915ull);
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 15424029559406978265ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2038802551024518635ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
    VL_SCOPED_RAND_RESET_W(82, vlSelf->__VdlyVal__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0, __VscopeHash, 7581938554709987043ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5173723700486732686ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_160x514__DOT__ram_Inst_160X82_0_432__DOT__ITOP__DOT__iow1__DOT__arr__v0 = 0;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b8c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b8c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b8c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b8c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b8c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b8c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b9c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b9c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b9c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b9c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b9c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b9c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b10c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b10c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b10c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b10c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b10c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b10c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b11c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b11c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b11c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b11c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b11c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b11c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b12c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b12c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b12c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b12c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b12c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b12c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b13c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b13c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b13c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b13c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b13c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b13c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b14c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b14c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b14c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b14c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b14c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b14c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b15c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c0_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c0_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__0(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT____Vcellinp__iow0____pinNumber1 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF) 
                          >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0) 
           | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__pre_Wa_reg_w0)
                : 0U);
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_0_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_144_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_288_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__we_0_432_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_0)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_144)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_288)));
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__access_en_r_0_432)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wa_b15c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_we_w0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_we_b15c1_d2;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_144 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_288 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_re_r0_0_432 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_re_b15c0;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk0 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__WAFF));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][0U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][1U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__rmuxd1[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__iow1__DOT__arr
           [(0x0000007fU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR) 
                            >> 1U))][2U] & (- (IData)(
                                                      ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADRCLK) 
                                                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__ram_Inst_256X80_0_432__DOT__ITOP__DOT__RADR)))));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__1(Vsim_nv_ram_rws_256x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_nv_ram_rws_256x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_column1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_256x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_wdat_b15c1_d2[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_144_q) 
                | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_288_q) 
                   | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__re_0_432_q))))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_rdat_b15c1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

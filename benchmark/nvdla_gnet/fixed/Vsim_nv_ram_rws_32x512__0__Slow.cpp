// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<16>/*511:0*/ Vsim__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_0_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_0_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_0[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_1_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 1U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_1_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_1[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 2U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_2_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 2U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_2_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_2[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 3U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_3_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 3U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_3_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_3[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 4U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_4_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 4U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_4_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_4[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 5U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_5_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 5U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_5_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_5[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 6U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_6_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 6U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_6_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_6[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__0(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1)) 
                 >> 7U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_addr_7_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_en_d1) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_addr_in;
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_en_in) 
                     >> 7U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0[6U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR))][6U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK));
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0;
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__1(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__u_accu_dbuf_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_255_0->Q[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_Data_reg_r0_511_256->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net[0x0000000fU];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h93e1b771_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h93e1b771_0[0x0000000fU];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_wr_data_7_d1[0x0000000fU];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q) 
             | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_delivery_buffer__DOT__dbuf_rd_data_ecc_7[0x0000000fU];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0[0x0000000fU];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x512___ctor_var_reset(Vsim_nv_ram_rws_32x512* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x512___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__mbist_Do_r0_int_net, __VscopeHash, 8375041744856287307ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2910182717055685832ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8950102726472780384ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13556149876715291538ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1530489698547456906ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1894235164742468453ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16881002705030522389ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__pre_muxed_Di_w0_B, __VscopeHash, 1266317920160157679ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_Di_w0, __VscopeHash, 2049916770951474267ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052643894102978343ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10919329308723732155ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9649871538170707018ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10348107232442679292ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1687645672745965347ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 667657915575238202ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16565039060645297101ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10590305055687513910ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3915062745186087279ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5126959185907933198ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 456319091079595399ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8811779007303467314ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12542642939696094041ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18298210151286394485ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11975330015028732724ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__muxed_Data_r0, __VscopeHash, 2629528841687056381ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9516585046265213702ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8509878392782551783ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13660703035250566555ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5438770325683624440ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1745840595552288068ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15251572630973387997ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10193766063458341502ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_gate_core_0_0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16808336049893797504ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2103940729521728510ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5824077512067748599ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3349257034098747964ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16926822470721907121ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4489043825524104389ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1398490552569464945ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11111387097506332712ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10816047238402773519ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2827287493477333910ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974554938382500803ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862010922651251192ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2038189162868054769ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 4149105900016016386ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__dout, __VscopeHash, 6006542557342310652ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16678423205940833185ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8902925217361349407ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11564095365900463087ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 4986243824024781637ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 10908198879547086779ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8615759022177858163ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15993171013486592088ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18163654597815960694ull);
    vlSelf->__PVT__r_nv_ram_rws_32x512__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3542871324407273822ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__VdlyVal__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 7759754042460563153ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17850413905754849800ull);
    vlSelf->__VdlySet__r_nv_ram_rws_32x512__DOT__ram_Inst_32X224_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

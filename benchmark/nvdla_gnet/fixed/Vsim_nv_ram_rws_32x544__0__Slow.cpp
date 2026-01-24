// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<17>/*543:0*/ Vsim__ConstPool__CONST_h70f0910f_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__0\n"); );
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 4U));
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 4U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__1\n"); );
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
                = Vsim__ConstPool__CONST_h70f0910f_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__0\n"); );
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 5U));
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 5U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_5__1\n"); );
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
                = Vsim__ConstPool__CONST_h70f0910f_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__0\n"); );
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 6U));
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 6U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_6__1\n"); );
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
                = Vsim__ConstPool__CONST_h70f0910f_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__0(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__0\n"); );
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 7U));
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
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 7U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0;
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__1(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_7__1\n"); );
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
                = Vsim__ConstPool__CONST_h70f0910f_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_h70f0910f_0[0x00000010U];
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

VL_ATTR_COLD void Vsim_nv_ram_rws_32x544___ctor_var_reset(Vsim_nv_ram_rws_32x544* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x544___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    VL_SCOPED_RAND_RESET_W(544, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(544, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 239115053606780043ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778394995667096840ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17149839556550221143ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10917453265733364170ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15214537929671852826ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8081310590540142480ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7582400328240495048ull);
    VL_SCOPED_RAND_RESET_W(544, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__pre_muxed_Di_w0_B, __VscopeHash, 15038372360996657416ull);
    VL_SCOPED_RAND_RESET_W(544, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_Di_w0, __VscopeHash, 5084098514607819539ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5696977480583076981ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18406183525437980639ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16816478560287183016ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14883790806388962820ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13699976861987106107ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3906575407558591104ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10724869762113077008ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15309396851228283965ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2981796919165045612ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672173086297077737ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5550153248390238435ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4497109672337391340ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6905611172784016020ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5810651302599499124ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5626864144138689515ull);
    VL_SCOPED_RAND_RESET_W(544, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__muxed_Data_r0, __VscopeHash, 10216933931575889365ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6074103021462312748ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3240155920717870737ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11674661183533154827ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603985639576794074ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17812957134411177966ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13807243030069206288ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414922826201430055ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_gate_core_0_288__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6850730321622483161ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17425558350043201072ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1019819688364158119ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17558634725589472972ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716557955678235981ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1228063632483227077ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1574697688019545677ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6530329162570294271ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6337968760252031450ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776120428139624116ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14321408919044294520ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2624356562927775605ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981388565637420537ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 8594890975704676683ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__dout, __VscopeHash, 5892949041528340652ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6395348260687994964ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12775853301781511930ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6705002413159459011ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 8607255331252619137ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 2563967972055445718ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15589415580503448034ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10278941626150842418ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8316183922893379544ull);
    vlSelf->__PVT__r_nv_ram_rws_32x544__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 763876203084735476ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__VdlyVal__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 3911560910360942590ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4377286657591727814ull);
    vlSelf->__VdlySet__r_nv_ram_rws_32x544__DOT__ram_Inst_32X256_0_288__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

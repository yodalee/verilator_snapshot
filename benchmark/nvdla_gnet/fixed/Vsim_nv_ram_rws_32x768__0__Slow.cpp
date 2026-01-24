// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_hda9269f3_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3262[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_0_d1[0x00000017U];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_0[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 1U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 1U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3263[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_1_d1[0x00000017U];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_1[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 2U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 2U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3264[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_2_d1[0x00000017U];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_2[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__0(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[1U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[2U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[3U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[4U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[5U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[6U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[7U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[8U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[9U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000aU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000bU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000cU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000dU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000eU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x0000000fU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000010U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000011U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000012U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000013U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000014U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000015U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000016U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B[0x00000017U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E 
        = (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                  | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1)) 
                 >> 3U));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__nvdla_op_gated_clk_1) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288))));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576))));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_addr_d1;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_en_d1) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_addr;
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_en) 
                     >> 3U));
    }
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[4U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][4U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0[5U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR))][5U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 
        = ((~ (0U != (3U & ((3U & (((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                    & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF)) 
                                   >> 5U)) | ((~ (3U 
                                                  & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK))) 
                                                     >> 5U))) 
                                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR) 
                                                 >> 5U)))))) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__1(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[7U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[8U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[9U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000aU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000bU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000cU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000dU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000eU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_511_256->__VdfgRegularize_h6e95ff9d_0_3265[0x0000000fU];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[0U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[1U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[2U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[3U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[4U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[5U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[6U];
    vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U] 
        = vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_Data_reg_r0_767_512->Q[7U];
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net[0x00000017U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[7U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[8U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[9U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
            vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
                = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_wr_data_3_d1[0x00000017U];
    }
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q) 
             | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q) 
                | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q)))
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__abuf_rd_data_ecc_3[0x00000017U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[7U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[8U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[8U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[9U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[9U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000aU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000aU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000bU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000bU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000cU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000cU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000dU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000dU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000eU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000eU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x0000000fU] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x0000000fU];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000010U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000010U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000011U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000011U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000012U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000012U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000013U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000013U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000014U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000014U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000015U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000015U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000016U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000016U];
        vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0[0x00000017U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0[0x00000017U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_32x768___ctor_var_reset(Vsim_nv_ram_rws_32x768* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x768___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__mbist_Do_r0_int_net, __VscopeHash, 16795573975217200763ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769061524130188990ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13914626022176579516ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10637934157741149503ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2387989765759864148ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2726251193775913174ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7547873742737524908ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__pre_muxed_Di_w0_B, __VscopeHash, 11579240283400924334ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_Di_w0, __VscopeHash, 17071969785166987341ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2089307860048499108ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4811240722124221819ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17173867506326204547ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13043171201103615714ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__we_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17707359004387146160ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2475863556716185881ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__we_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18432803051201957131ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_we_w0_0_576 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 493387605689421732ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__we_0_576_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1524476543993659107ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17541261897523156254ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5917912036846250516ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15613710563937861046ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12915251460747006554ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__access_en_r_0_576 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10134780720069837566ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2389372494446983770ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__re_0_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15311354586616766189ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_288 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6821726932656936356ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__re_0_288_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13593474106849688344ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_re_r0_0_576 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15630836675043591199ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__re_0_576_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11963450332073682940ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__muxed_Data_r0, __VscopeHash, 9718743374328862166ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__mbist_ce_r0_0_0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1944384836681973766ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10455996006835748015ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11004771030319872980ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1272558174121583888ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4808824126851455308ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12542766389259207876ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12106103263141717087ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_gate_core_0_0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10999359806866160976ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3889854443025167383ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125892321957254048ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7522925613901403569ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11952846541477374864ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544102414436498351ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17289702208107330671ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17485605258644045058ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16652228055876059433ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7475285036745759784ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 451995770629209844ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13731647051938031426ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13842397246682341569ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 4667319463340885107ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__dout, __VscopeHash, 9232386230317427082ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5427653958681659366ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9175460479675627402ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13917533535667182714ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 211926562535351681ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(192, vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 9430994228719822942ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6909118842653471054ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16905649164521637281ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__testInst_re_reg_r0_0_0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10350516716226352977ull);
    vlSelf->__PVT__r_nv_ram_rws_32x768__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2901650829357969305ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->__VdlyVal__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 6084684020332046846ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2844876934965244697ull);
    vlSelf->__VdlySet__r_nv_ram_rws_32x768__DOT__ram_Inst_32X192_0_576__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

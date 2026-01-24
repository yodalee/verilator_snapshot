// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_RUBIK_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__idata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__idata_adr))));
    vlSelfRef.__PVT__wr_busy_in_int = ((IData)(vlSelfRef.__PVT__idata_busy_int) 
                                       & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.__PVT__rd_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__odata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__odata_adr))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__rd_count_p_next_rd_popping = (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__rd_pushing)
                                                       ? (IData)(vlSelfRef.__PVT__odata_count_p)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__odata_count_p) 
                                                       - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__odata_count_p) 
                          + (IData)(vlSelfRef.__PVT__rd_pushing)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__idata_busy_int)) 
                                     & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.__VdfgRegularize_h8709d9ae_0_0 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy)) 
                                                & (IData)(vlSelfRef.__PVT__odata_pvld_int));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0x0000007fU & ((IData)(vlSelfRef.__PVT__idata_count) 
                        + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ore = ((~ (IData)(vlSelfRef.__VdfgRegularize_h8709d9ae_0_0)) 
                            & (IData)(vlSelfRef.__PVT__odata_pvld_p));
    vlSelfRef.__PVT__idata_busy_next = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                        & (0x50U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (0x0000007fU & 
                                      ((IData)(vlSelfRef.__PVT__wr_popping)
                                        ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                            ? (IData)(vlSelfRef.__PVT__idata_count)
                                            : ((IData)(vlSelfRef.__PVT__idata_count) 
                                               - (IData)(1U)))
                                        : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__rd_count_p_next_not_0 = ((IData)(vlSelfRef.__PVT__ore)
                                               ? (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_rd_popping))
                                               : (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.__PVT__rd_enable = ((IData)(vlSelfRef.__PVT__rd_count_p_next_not_0) 
                                  & ((~ (IData)(vlSelfRef.__PVT__odata_pvld_p)) 
                                     | (IData)(vlSelfRef.__PVT__ore)));
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 
            = vlSelfRef.__PVT__idata_adr;
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 
            = vlSelfRef.__PVT__wr_reserving;
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 
            = ((IData)(vlSelfRef.__PVT__ore) ? (IData)(vlSelfRef.__PVT__rd_adr_next)
                : (IData)(vlSelfRef.__PVT__odata_adr));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__rd_enable;
    }
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vsim_NV_NVDLA_RUBIK_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__idata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__idata_adr))));
    vlSelfRef.__PVT__wr_busy_in_int = ((IData)(vlSelfRef.__PVT__idata_busy_int) 
                                       & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.__PVT__rd_adr_next = ((0x4fU == (IData)(vlSelfRef.__PVT__odata_adr))
                                     ? 0U : (0x0000007fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__odata_adr))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__rd_count_p_next_rd_popping = (0x0000007fU 
                                                   & ((IData)(vlSelfRef.__PVT__rd_pushing)
                                                       ? (IData)(vlSelfRef.__PVT__odata_count_p)
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__odata_count_p) 
                                                       - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__odata_count_p) 
                          + (IData)(vlSelfRef.__PVT__rd_pushing)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__idata_busy_int)) 
                                     & (IData)(vlSelfRef.__PVT__idata_pvld_in));
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_h8709d9ae_0_0 = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__data_fifo_rdy)) 
                                                & (IData)(vlSelfRef.__PVT__odata_pvld_int));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0x0000007fU & ((IData)(vlSelfRef.__PVT__idata_count) 
                        + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSelfRef.nvdla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSelfRef.nvdla_core_clk) & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__ore = ((~ (IData)(vlSelfRef.__VdfgRegularize_h8709d9ae_0_0)) 
                            & (IData)(vlSelfRef.__PVT__odata_pvld_p));
    vlSelfRef.__PVT__idata_busy_next = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                        & (0x50U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next = (0x0000007fU & 
                                      ((IData)(vlSelfRef.__PVT__wr_popping)
                                        ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                            ? (IData)(vlSelfRef.__PVT__idata_count)
                                            : ((IData)(vlSelfRef.__PVT__idata_count) 
                                               - (IData)(1U)))
                                        : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__rd_count_p_next_not_0 = ((IData)(vlSelfRef.__PVT__ore)
                                               ? (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_rd_popping))
                                               : (0U 
                                                  != (IData)(vlSelfRef.__PVT__rd_count_p_next_no_rd_popping)));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[0U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][0U]
             : Vsim__ConstPool__CONST_h9e67c271_0[0U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[1U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][1U]
             : Vsim__ConstPool__CONST_h9e67c271_0[1U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[2U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][2U]
             : Vsim__ConstPool__CONST_h9e67c271_0[2U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[3U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][3U]
             : Vsim__ConstPool__CONST_h9e67c271_0[3U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[4U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][4U]
             : Vsim__ConstPool__CONST_h9e67c271_0[4U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[5U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][5U]
             : Vsim__ConstPool__CONST_h9e67c271_0[5U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[6U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][6U]
             : Vsim__ConstPool__CONST_h9e67c271_0[6U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0[7U] 
        = (((0x4fU >= (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR))
             ? vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr
            [vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR][7U]
             : Vsim__ConstPool__CONST_h9e67c271_0[7U]) 
           & (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK))));
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK))) 
            & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK)))) 
              & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR)));
    vlSelfRef.__PVT__rd_enable = ((IData)(vlSelfRef.__PVT__rd_count_p_next_not_0) 
                                  & ((~ (IData)(vlSelfRef.__PVT__odata_pvld_p)) 
                                     | (IData)(vlSelfRef.__PVT__ore)));
    if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0;
        } else {
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 = 0U;
        }
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q))));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 
            = vlSelfRef.__PVT__idata_adr;
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 
            = vlSelfRef.__PVT__wr_reserving;
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 
            = ((IData)(vlSelfRef.__PVT__ore) ? (IData)(vlSelfRef.__PVT__rd_adr_next)
                : (IData)(vlSelfRef.__PVT__odata_adr));
        vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__rd_enable;
    }
    vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR) 
                >> 6U) & (IData)((0U != (0x30U & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR)))))) 
           & (IData)(vlSelfRef.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_RUBIK_fifo___ctor_var_reset(Vsim_NV_NVDLA_RUBIK_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_RUBIK_fifo___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->idata_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423897373444220939ull);
    vlSelf->idata_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973369825975576446ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->idata_pd, __VscopeHash, 8389993030636347910ull);
    vlSelf->odata_prdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10068332779195433651ull);
    vlSelf->odata_pvld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1835890862769791325ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->odata_pd, __VscopeHash, 11479449356843242056ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__nvdla_core_clk_mgated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372107809610179032ull);
    vlSelf->__PVT__wr_reserving = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15396406962418085527ull);
    vlSelf->__PVT__idata_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3603571997050984674ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__idata_pd_in, __VscopeHash, 16955598999682857749ull);
    vlSelf->__PVT__wr_busy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14382547935673210735ull);
    vlSelf->__PVT__idata_busy_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11992319717308879131ull);
    vlSelf->__PVT__wr_busy_in_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567852671110200953ull);
    vlSelf->__PVT__idata_busy_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10416986628173117062ull);
    vlSelf->__PVT__wr_popping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10594169566903493383ull);
    vlSelf->__PVT__idata_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5201802595436549385ull);
    vlSelf->__PVT__wr_count_next_no_wr_popping = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1092260555415418571ull);
    vlSelf->__PVT__wr_count_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16232479525645034119ull);
    vlSelf->__PVT__idata_adr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3821688370736811304ull);
    vlSelf->__PVT__rd_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15877535150226119869ull);
    vlSelf->__PVT__ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    vlSelf->__PVT__wr_adr_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16036078877911967407ull);
    vlSelf->__PVT__odata_adr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8690105715353707301ull);
    vlSelf->__PVT__rd_adr_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3978437815756534217ull);
    vlSelf->__PVT__rd_pushing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10944328766133905985ull);
    vlSelf->__PVT__odata_pvld_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13923001607891375596ull);
    vlSelf->__PVT__odata_pvld_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16795044104250269422ull);
    vlSelf->__PVT__odata_count_p = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5939281930996773751ull);
    vlSelf->__PVT__rd_count_p_next_rd_popping = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11345449497834823309ull);
    vlSelf->__PVT__rd_count_p_next_no_rd_popping = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11225919736592335130ull);
    vlSelf->__PVT__rd_count_p_next_not_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4979914966689676036ull);
    vlSelf->__PVT__prand_inst0__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3762344920521732210ull);
    vlSelf->__PVT__prand_inst1__Vstatic__diff = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11730740729858420399ull);
    vlSelf->__VdfgRegularize_h8709d9ae_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8341071017310919171ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__disable_asserts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1252783748678362569ull);
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936104093281249428ull);
    vlSelf->__PVT__ram__DOT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14060288000955431020ull);
    vlSelf->__PVT__ram__DOT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18157284654029253723ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14112621789597572600ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920910091963091003ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4806150026068866517ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13284493794701336963ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10364122729875580738ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7861402111674490901ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18165552096588992728ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16412202846762675391ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9396547467445779475ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8591261554746536755ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9124714551813940473ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3772976223071377724ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15073503136938417905ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4427546655878633762ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8274771605188120032ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5624301278855541918ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6645081694111279498ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 115548009733842085ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16677927298406559146ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4327934740948288259ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4486253736583511833ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17783822405201502872ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5006491288853112348ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12471501571053951676ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11261952965066914026ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13084289459207808854ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5040878985970674948ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13345081324593531769ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17803347312624209014ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4175605645911241804ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11752060100350798204ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10427218599045581388ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RADRCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12890616342955005791ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9500836593634595327ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__ADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16990079205746864857ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 2469183041924355272ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__dout, __VscopeHash, 18214560532061762177ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2843336167379921835ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8907370289116438347ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13202652923051372510ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 15131107596006714052ull);
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 8022157726445375876ull);
    }
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9420998061698653622ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h7888cf15__0, __VscopeHash, 4985606072113620769ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 333961097882808123ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13790090370157214957ull);
    vlSelf->__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12375162054699772228ull);
    vlSelf->__Vdly__idata_pvld_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15886715503987292959ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__VdlyVal__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 9079741642812182323ull);
    vlSelf->__VdlyDim0__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16986811648479737128ull);
    vlSelf->__VdlySet__ram__DOT__r_nv_ram_rwsp_80x256__DOT__ram_Inst_80X256__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}

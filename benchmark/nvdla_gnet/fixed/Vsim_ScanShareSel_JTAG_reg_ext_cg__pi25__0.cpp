// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk_wire = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk_wire = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_l.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h__ram__DOT__r_nv_ram_rwsp_80x256__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_dr2drc__DOT__rbk_fifo_h.__PVT__ram__DOT__r_nv_ram_rwsp_80x256__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x72__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__ram_Inst_80X15__DOT__WA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__WA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__ram_Inst_128X11__DOT__RA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__ram_Inst_80X14__DOT__WA) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x16__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Wa_reg_w0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__muxed_Wa_w0) 
                 >> 6U));
}

void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi25___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_80x514__DOT__testInst_Ra_reg_r0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 1U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 2U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 3U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 4U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 5U));
    vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_80x514__DOT__D_Ra_reg_r0) 
                 >> 6U));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_256x3__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_256x3__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 = 0U;
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0;
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0) 
                 >> 3U));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__RA;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 
            = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat) 
                     >> 1U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1 = 1U;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat) 
                     >> 2U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2 = 1U;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__13(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat) 
                     >> 3U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3 = 1U;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__14(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__15(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__16(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__17(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                           >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                         >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))))) 
                 << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                                  << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
               | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                          << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                  | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__18(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0] 
            = ((0x0eU & vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v0));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1] 
            = ((0x0dU & vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v1) 
                  << 1U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2] 
            = ((0x0bU & vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v2) 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3] 
            = ((7U & vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array__v3) 
                  << 3U));
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__19(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wd_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__20(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA;
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__2(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat];
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__4(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_pd));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r)))
            : (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig)));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__22(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x0eU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__23(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x0dU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk) 
              << 1U));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__24(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x0bU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk) 
              << 2U));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__25(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((7U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk) 
              << 3U));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__9(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__11(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__13(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3072))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__14(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3071))))));
}

void Vsim_nv_ram_rws_256x3__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000000fU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | ((0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing)));
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__17(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                           >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                         >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))))) 
                 << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                                  << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
               | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                          << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                  | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
    }
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__3(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Wa_reg_w0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__5(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__6(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__WD 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__mbist_Do_r0_int_net)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_pd));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__7(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__access_en_r)))
            : (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_take_elig)));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__8(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__10(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__12(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__we_q))))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__wr_reserving_and_not_bypassing));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__13(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr) 
                       >> 3U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))))) 
             << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                   >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                              << 2U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))) 
           | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                      << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr))) 
              | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3074))) 
                       & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__r0_arr)))));
}

void Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__14(Vsim_nv_ram_rws_256x3__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x3__Fz5___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__ram__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x3__DOT__ram_Inst_256X4__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3073))))));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_32x16___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___eval_initial__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mbist_ramaccess_rst_ = 0U;
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14 = 0U;
    vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15 = 0U;
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__1(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we = 
        ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr)) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__3(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0;
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__4(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
             << 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U))) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__r_nv_ram_rws_32x16__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__7(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__8(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 6U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 7U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 8U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 9U));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000aU));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000bU));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000cU));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000dU));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000eU));
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0) 
                 >> 0x0000000fU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__9(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SO_int_net = vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0 
            = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__14(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 1U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__15(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 2U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__16(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 3U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__17(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 4U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__18(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 5U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__19(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 6U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__20(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 7U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__21(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 8U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__22(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 9U));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__23(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0aU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__24(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0bU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__25(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0cU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__26(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0dU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__27(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0eU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__28(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk) {
        vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat) 
                     >> 0x0fU));
        vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat;
        vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15 = 1U;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__29(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_ce_r0_1p = 0U;
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__30(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__30\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__31(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__31\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net 
        = (((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__32(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__32\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffeU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__33(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__33\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffdU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 1U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__34(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__34\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffbU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 2U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__35(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__35\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfff7U & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 3U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__36(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__36\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffefU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 4U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__37(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__37\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffdfU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 5U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__38(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__38\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffbfU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 6U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__39(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__39\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xff7fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 7U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__40(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__40\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfeffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 8U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__41(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__41\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfdffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 9U));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__42(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__42\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfbffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000aU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__43(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__43\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xf7ffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000bU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__44(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__44\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xefffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000cU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__45(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__45\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xdfffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000dU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__46(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__46\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xbfffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000eU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__47(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__47\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x7fffU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk) 
              << 0x0000000fU));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__48(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__48\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0] 
            = ((0xfffeU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v0));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1] 
            = ((0xfffdU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v1) 
                  << 1U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2] 
            = ((0xfffbU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v2) 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3] 
            = ((0xfff7U & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v3) 
                  << 3U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4] 
            = ((0xffefU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v4) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5] 
            = ((0xffdfU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v5) 
                  << 5U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6] 
            = ((0xffbfU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v6) 
                  << 6U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7] 
            = ((0xff7fU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v7) 
                  << 7U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8] 
            = ((0xfeffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v8) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9] 
            = ((0xfdffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v9) 
                  << 9U));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10] 
            = ((0xfbffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v10) 
                  << 0x0000000aU));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11] 
            = ((0xf7ffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v11) 
                  << 0x0000000bU));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12] 
            = ((0xefffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v12) 
                  << 0x0000000cU));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13] 
            = ((0xdfffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v13) 
                  << 0x0000000dU));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14] 
            = ((0xbfffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v14) 
                  << 0x0000000eU));
    }
    if (vlSelfRef.__VdlySet__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array[vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15] 
            = ((0x7fffU & vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
                [vlSelfRef.__VdlyDim0__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15]) 
               | ((IData)(vlSelfRef.__VdlyVal__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array__v15) 
                  << 0x0000000fU));
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__49(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__49\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wd_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD;
    }
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__50(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__50\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk)))) {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat 
            = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA;
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__1(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U]);
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__3(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))))
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__4(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat];
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__7(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__8(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__9(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re = 
        ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr)) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__12(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2799) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)))
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__14(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2800))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__1(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x0000001bU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 5U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__3(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2801) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__12(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram1__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2802))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x00000016U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x0000000aU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2803) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram2__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2804))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x00000011U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x0000000fU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[1U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2805) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram3__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2806))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                                  >> 0x00000014U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2807) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram4__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2808))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                               << 7U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                         >> 0x00000019U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[2U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2809) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram5__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2810))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 2U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[0U] 
                                         >> 0x0000001eU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2811) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram6__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2812))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x0000001dU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 3U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[3U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2813) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram7__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2814))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x00000018U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 8U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2815) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram8__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2816))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x00000013U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 0x0000000dU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[4U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2817) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram9__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2818))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 0x0000000eU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                                  >> 0x00000012U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2819) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram10__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2820))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                               << 9U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                         >> 0x00000017U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[5U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2821) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram11__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2822))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[1U] 
                                         >> 0x0000001cU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2823) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram12__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2824))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000001fU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 1U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[6U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2825) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram13__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2826))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000001aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 6U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2827) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram14__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2828))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x00000015U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x0000000bU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[7U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2829) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram15__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2830))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x00000010U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2831) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram16__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2832))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 0x0000000bU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                                  >> 0x00000015U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[8U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2833) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram17__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2834))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                               << 6U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                         >> 0x0000001aU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2835) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram18__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2836))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 1U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[2U] 
                                         >> 0x0000001fU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[9U] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2837) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram19__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2838))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x0000001cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 4U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2839) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram20__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2840))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x00000017U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 9U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000aU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2841) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram21__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2842))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x00000012U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 0x0000000eU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2843) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram22__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2844))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 0x0000000dU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                                  >> 0x00000013U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000bU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2845) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram23__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2846))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__nvdla_op_gated_clk_2) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__we_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x0000ffffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__pre_Wa_reg_w0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
                = (0x0000001fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
                = (0x0000001fU & 0U);
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__RA 
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                               << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                         >> 0x00000018U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2847) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram24__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2848))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

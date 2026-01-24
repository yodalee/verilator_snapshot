// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2907) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram22__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2908))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2909) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram23__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2910))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2911) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram24__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2912))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2913) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram25__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2914))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2915) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram26__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2916))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2917) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram27__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2918))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2919) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram28__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2920))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2921) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram29__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2922))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2923) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram30__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2924))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2925) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram31__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2926))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

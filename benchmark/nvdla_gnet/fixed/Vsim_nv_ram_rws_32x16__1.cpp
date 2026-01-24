// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 3U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[3U] 
                                         >> 0x0000001dU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000cU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2849) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram25__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2850))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000001eU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 2U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2851) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram26__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2852))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x00000019U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 7U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000dU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2853) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram27__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2854))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x00000014U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x0000000cU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2855) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram28__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2856))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000000fU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x00000011U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000eU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2857) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram29__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2858))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 0x0000000aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                                  >> 0x00000016U)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU]));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2859) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram30__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2860))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__2(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__2\n"); );
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
            = (0x0000001fU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                               << 5U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p2__DOT__p2_pipe_data[4U] 
                                         >> 0x0000001bU)));
        vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WA 
            = (0x0000001fU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x00000010U]);
    }
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__5(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__WD 
        = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
                           ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                               ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_Do_r0_int_net)
                               : 0U) : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
                                         << 0x00000010U) 
                                        | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__pipe_p1__DOT__p1_pipe_data[0x0000000fU] 
                                           >> 0x00000010U))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2861) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf0_ram31__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2862))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__1(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wptr) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_wr_pop));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__9(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rptr) 
         & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rf_rd_pop));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__re) 
           | (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__12(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2863) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__14(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2864))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__1(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__CLK_GATE_clk__DOT__qd = 0U;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E;
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
           | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_gate_core__DOT__E));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
            : ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__mbist_ce_r0_1p) 
               & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__3(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_we_w0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__we));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2865) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__12(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__muxed_re_r0 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__access_en_r)))
            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram0.__PVT__r_nv_ram_rws_32x16__DOT__re));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram1__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2866))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2867) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram2__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2868))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2869) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram3__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2870))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2871) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram4__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2872))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2873) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram5__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2874))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2875) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram6__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2876))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2877) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram7__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2878))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2879) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram8__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2880))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2881) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram9__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2882))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2883) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram10__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2884))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2885) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram11__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2886))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2887) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram12__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2888))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2889) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram13__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2890))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2891) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram14__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2892))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2893) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram15__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2894))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2895) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram16__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2896))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2897) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram17__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2898))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2899) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram18__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2900))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2901) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram19__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2902))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2903) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram20__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2904))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__0(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__0\n"); );
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
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__6(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__wa_lat));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__10(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x0000ffffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905))))));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__11(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2905) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__weclk));
}

void Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__13(Vsim_nv_ram_rws_32x16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_32x16___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_rubik__DOT__u_rf_core__DOT__rubik_rf1_ram21__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = (((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                          >> 0x0000000fU) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                 >> 0x0000000fU) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))))) 
                << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 0x0000000eU) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                 << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           >> 0x0000000cU)))) 
              | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000dU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000cU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000cU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000cU))))) << 0x0000000cU) 
            | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 0x0000000bU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   >> 0x0000000aU))) 
                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                               >> 0x0000000aU) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 0x0000000aU)))) << 0x0000000aU) 
               | (((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                >> 9U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                           << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                     >> 8U))) | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                       >> 8U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                    & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                       >> 8U)))) 
                  << 8U))) | (((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 7U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 6U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 6U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 6U)))) 
                                << 6U) | (((2U & ((
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                      >> 5U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                     >> 4U))) 
                                           | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U)))) 
                                          << 4U)) | 
                              ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                              >> 3U) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                         << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                   >> 2U))) 
                                 | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                               >> 2U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                          & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                             >> 2U)))) 
                                << 2U) | ((2U & (((~ 
                                                   (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     >> 1U) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                  << 1U) 
                                                 & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                                          | (1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2906))) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_32x16__DOT__ram_Inst_32X16__DOT__ITOP__DOT__io__DOT__r0_arr)))))));
}

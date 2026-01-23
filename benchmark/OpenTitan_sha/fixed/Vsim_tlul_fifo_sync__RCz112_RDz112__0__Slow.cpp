// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__gnt_i) 
                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__missed_err_gnt_q)) 
                                               & ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
                                                  & (~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(
                                                         ((0x00008000U 
                                                           != 
                                                           (0x0001c000U 
                                                            & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o)) 
                                                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_rspfifo__DOT__rvalid_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1750 = (
                                                   ((IData)(vlSelfRef.__PVT__rspfifo__DOT__wvalid_i) 
                                                    & (1U 
                                                       != 
                                                       (3U 
                                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_tlul_adapter__DOT__u_reqfifo__DOT__rdata_o 
                                                           >> 0x0000000fU))))
                                                    ? 0U
                                                    : 1U);
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__5__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1335[3U]);
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__6__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1336[3U]);
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__7__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1337[3U]);
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rspfifo__DOT__wvalid_i = (1U & 
                                               ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__empty_rclk)) 
                                                & (IData)(
                                                          (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__rdata_o 
                                                           >> 0x00000030U))));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__fifo_h__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_u_o__BRA__8__KET____DOT__dev_select));
    vlSelfRef.tl_h_i[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[0U];
    vlSelfRef.tl_h_i[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[1U];
    vlSelfRef.tl_h_i[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[2U];
    vlSelfRef.tl_h_i[3U] = (((IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i) 
                             << 0x0000000cU) | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1338[3U]);
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__13__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__13__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   (((~ 
                                                      ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__rst_done) 
                                                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__shadow_rst_done))) 
                                                     | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27) 
                                                         | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_29) 
                                                            | ((0x0eU 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001dU)))) 
                                                               | ((0x0fU 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                        << 3U) 
                                                                       | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          >> 0x0000001dU)))) 
                                                                  | ((0x10U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                           << 3U) 
                                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             >> 0x0000001dU)))) 
                                                                     | (0x11U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 3U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001dU)))))))))
                                                         ? 
                                                        ((0x0aU 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU))))
                                                          ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                          : 
                                                         ((0x0bU 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU))))
                                                           ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                           : 
                                                          ((0x0cU 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU))))
                                                            ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                            : 
                                                           ((0x0dU 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU))))
                                                             ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div2_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                             : 
                                                            ((0x0eU 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                   << 3U) 
                                                                  | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                     >> 0x0000001dU))))
                                                              ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                              : 
                                                             ((0x0fU 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 3U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001dU))))
                                                               ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_io_div4_meas_ctrl_shadowed_cdc__DOT__src_busy_q)
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                     << 3U) 
                                                                    | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       >> 0x0000001dU))))
                                                                ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                                : (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_main_meas_ctrl_shadowed_cdc__DOT__src_busy_q))))))))
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU))))
                                                          ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_en_cdc__DOT__src_busy_q)
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_usb_meas_ctrl_shadowed_cdc__DOT__src_busy_q))))) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__14__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__14__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__rst_done) 
                                                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__shadow_rst_done))) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__19__KET____DOT__dev_select));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__23__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__23__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__24__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__24__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__25__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__25__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__0(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__26__KET____DOT__fifo_d__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqfifo__DOT__wvalid_i = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__empty_rclk)) 
                                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__26__KET____DOT__dev_select));
    vlSelfRef.__PVT__reqfifo__DOT__wready_o = (1U & 
                                               (~ (
                                                   ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__reg_busy_sel) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo__DOT__wvalid_i)) 
                                                   | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
}

VL_ATTR_COLD void Vsim_tlul_fifo_sync__RCz112_RDz112___ctor_var_reset(Vsim_tlul_fifo_sync__RCz112_RDz112* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_tlul_fifo_sync__RCz112_RDz112___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_h_i, __VscopeHash, 2122476622687747023ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_h_o, __VscopeHash, 6319575076937490387ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_d_o, __VscopeHash, 11368034984740101998ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_d_i, __VscopeHash, 13014753160808655041ull);
    vlSelf->spare_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 493429523236848428ull);
    vlSelf->__PVT__spare_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17173196022936639056ull);
    vlSelf->spare_rsp_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7475389204376298809ull);
    vlSelf->__PVT__spare_rsp_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13721876725535676424ull);
    vlSelf->__PVT__reqfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365709856125344263ull);
    vlSelf->__PVT__reqfifo__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15538047954568321559ull);
    vlSelf->__PVT__rspfifo__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7229493255230154855ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_247 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2732934676485724481ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_250 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1697365644683752901ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1147, __VscopeHash, 10213292013155887045ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1148, __VscopeHash, 3865571222370059618ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1151, __VscopeHash, 9086886424370861321ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1152, __VscopeHash, 15877274905618539519ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1187, __VscopeHash, 7747916630172928479ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1286, __VscopeHash, 15266442775678839270ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1287, __VscopeHash, 8364951281875946788ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1288, __VscopeHash, 17927965594672518681ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1289, __VscopeHash, 16057940844564468373ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1290, __VscopeHash, 5671642631638001974ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1291, __VscopeHash, 7307688840372923275ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1295, __VscopeHash, 15251195112091106802ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1296, __VscopeHash, 7536425785439896718ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1297, __VscopeHash, 1075971738194410004ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1322, __VscopeHash, 14962991098696768043ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1323, __VscopeHash, 16666111620964652612ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1324, __VscopeHash, 5793003582357325074ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1325, __VscopeHash, 1069982564818473763ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1326, __VscopeHash, 15276973803653443269ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1327, __VscopeHash, 939902205204831442ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1328, __VscopeHash, 9762649531497642249ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1329, __VscopeHash, 13449802544772527964ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1684 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3740029716696325168ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1689 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5836859011657570526ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1690 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12915888755457182409ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1694 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11106071373544436206ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1695 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16930736163979190840ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1750 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10143240735055270496ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1757, __VscopeHash, 8762487282713885153ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1758, __VscopeHash, 13552287231290986449ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1764 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14003529528653965406ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1765 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8437625188465348852ull);
}

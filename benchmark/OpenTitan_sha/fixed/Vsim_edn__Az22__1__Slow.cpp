// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__2(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__VdfgRegularize_h6e95ff9d_0_433));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt) 
           | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt) 
              | ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
                 & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__d 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15) 
           & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_send_ins_cmd) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_mode_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__d 
        = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15) 
           & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_busy) 
               & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
              | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_mode_q)));
    if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__12__KET__) {
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d 
            = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28) 
               | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                   ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_ack_q)
                   : ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)) 
                      & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_ack_q))));
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d 
            = ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28)
                ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_sts_q)
                : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                    ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_sts_q)
                    : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake)
                        ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_hw_cmd_sts_q))));
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)
                               ? (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_type_q)
                               : (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_hw_cmd_handshake) 
                                   & ((~ ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32) 
                                          | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31))) 
                                      | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_hdr_busy_q)))
                                   ? vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_out_q
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_type_q))));
    } else {
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d = 0U;
    }
}

VL_ATTR_COLD void Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 9U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000018U))))) 
                                               & ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  | (1U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001eU)))))) 
                                              | (((2U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                        << 2U) 
                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                          >> 0x0000001eU)))) 
                                                  & (0U 
                                                     != 
                                                     (1U 
                                                      & (~ 
                                                         ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000018U)))))) 
                                                 | (((3U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x0000001eU)))) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000018U)))))) 
                                                    | (((4U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 2U) 
                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001eU)))) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000018U)))))) 
                                                       | (((5U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 2U) 
                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001eU)))) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & (~ 
                                                                  ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000018U)))))) 
                                                          | (((6U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                    << 2U) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x0000001eU)))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000018U)))))) 
                                                             | (((7U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                       << 2U) 
                                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x0000001eU)))) 
                                                                 & (0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000018U)))))) 
                                                                | (((8U 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                          << 2U) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x0000001eU)))) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 8U) 
                                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000018U)))))) 
                                                                   | (((9U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                             << 2U) 
                                                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x0000001eU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                      | (((0x0aU 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                          & (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                         | (((0x0bU 
                                                                              == 
                                                                              (0x0000001fU 
                                                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                            | (((0x0cU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                               | (((0x0dU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x0eU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x0fU 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | (((0x10U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))) 
                                                                                | ((0x11U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                                << 2U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x0000001eU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000018U)))))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((0x10U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we 
        = ((0x0eU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we 
        = ((1U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we 
        = ((6U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we 
        = ((7U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((0x0dU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we 
        = (((5U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                    << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                              >> 0x0000001eU)))) 
            & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q));
    vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__we 
        = ((4U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we 
        = ((0U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we 
        = ((3U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we 
        = ((8U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we 
        = ((2U == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                   << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                             >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we 
        = ((0x0bU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_generate_cmd__DOT__we 
        = ((0x0cU == (0x0000001fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                      << 2U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                >> 0x0000001eU)))) 
           & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_h9be6beb9_0_22));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000019U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001aU)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001bU)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                 >> 4U)));
    vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__wr_data 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de) 
            | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                 >> 5U)));
    vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_regwen__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x00000018U)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_reg_rdy_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
             >> 0x00000018U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__rescmd_handshake) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gencmd_handshake) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_generate_cmd__DOT__we));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__8__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake)) 
              & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i) 
                 | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd) 
                    | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd) 
                       | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd) 
                          | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_vld_q)))))));
    vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__7__KET__)
            ? ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_ins_cmd)
                ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_ins_cmd__q
                : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_gen_cmd)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_boot_gen_cmd__q
                    : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_wr_uni_cmd)
                        ? 5U : ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)
                                 ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                     << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                               >> 0x00000018U))
                                 : vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_req_q))))
            : 0U);
    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
        = vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw;
    if ((0x00000100U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0092U;
                                }
                            } else {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                        = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x0079U
                                                  : 0x017eU)
                                              : 0x017eU)
                                          : 0x017eU));
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01a3U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0161U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                                }
                            } else {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                        = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? 0x017eU
                                          : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x017eU
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe)
                                                   ? 
                                                  ((0U 
                                                    == vlSelfRef.__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                    ? 0x00bfU
                                                    : 0x010eU)
                                                   : 0x00c1U)
                                                  : 0x017eU))));
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                = ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                    ? ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                        ? ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                          ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                              ? 0x017eU
                                              : ((1U 
                                                  & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x002cU
                                                  : 0x017eU))
                                          : 0x017eU))
                        : 0x017eU) : ((0x00000010U 
                                       & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                       ? 0x017eU : 
                                      ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                        ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                    ? 0x017eU
                                                    : 0x01ddU)
                                                : 0x017eU)
                                            : 0x017eU)
                                        : 0x017eU)));
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo)))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0135U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_fo) 
                     & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01c7U;
                } else if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfe) 
                            & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x01bcU;
                } else if (vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0095U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
                = ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x006aU : 0x017eU)
                                : 0x017eU) : 0x017eU)
                        : 0x017eU) : ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                       ? ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                           ? 0x017eU
                                           : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                               ? 0x017eU
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                   ? 0x00f0U
                                                   : 0x017eU)))
                                       : 0x017eU));
        } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0161U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 3U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                            if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00a9U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                        }
                    } else {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i) {
                        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x0092U;
                    }
                } else {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
                } else if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) {
                    vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00c1U;
                }
            } else {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
            }
        } else {
            vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x017eU;
        }
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
            = ((8U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                ? 0x017eU : ((4U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                              ? 0x017eU : ((2U & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                                                ? 0x0077U
                                                : 0x017eU)
                                            : 0x017eU)));
    }
    if (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i) 
         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d 
            = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i)
                ? 0x017eU : ((0x017eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))
                              ? 0x017eU : 0x0018U));
    } else if (((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__)) 
                & ((((((((((((((((((0x01c7U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw)) 
                                   | (0x0079U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                  | (3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                 | (0x0077U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                                | (0x0135U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                               | (0x002cU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                              | (0x00a9U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                             | (0x00f0U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                            | (0x01bcU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                           | (0x01a3U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                          | (0x0092U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                         | (0x0161U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                        | (0x010eU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01ddU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x00bfU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x006aU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x0095U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x0018U == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw))))) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = 0x00c1U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
              & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29) 
                 | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__csrng_sw_cmd_ack_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_d = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
                                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                                                         & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
                                                            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse) 
                                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__gen_cmd_stage__BRA__1__KET____DOT__u_csrng_cmd_stage.__PVT__cmd_ack_q) 
                                                                  | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_q)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sw_cmd_mode) 
              & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__reject_csrng_entropy)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
                    & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__accept_sw_cmds_pulse) 
                       | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cs_cmd_handshake) 
                          | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_reg_rdy_q)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i) 
           & ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o));
    vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__d 
        = ((~ (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i)) 
           & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_rdy_d) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__wr_data 
        = ((~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                >> 0x00000018U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum 
        = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27) 
               | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i)));
    vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
           & (0x0cU == (0x0000000fU & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__4__KET__) 
           & ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17) 
              | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20) 
                 | ((0x1cU == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_err_code_test__q)) 
                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__err_code_test_qe)))));
    vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum 
        = (((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20) 
            | ((IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26) 
               | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22))) 
           | (IData)(vlSelfRef.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum));
    if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__de 
        = ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__3__KET__) 
           & (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum));
    vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i 
        = (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_fo__BRA__1__KET__) 
            & ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum) 
               | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
             >> 0x00000019U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__wr_data 
        = ((~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                >> 0x00000019U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q)));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[0U] = (0x02aaa801U 
                                               | (((((((0x0000000cU 
                                                        & ((- (IData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de))))) 
                                                      << 0x0000000cU) 
                                                     | (((0x0000000cU 
                                                          & ((- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de))) 
                                                             << 2U)) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__de)) 
                                                        << 8U)) 
                                                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__de) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de)))) 
                                                   << 0x00000010U) 
                                                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__de) 
                                                       << 0x0000000eU) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__de) 
                                                          << 0x0000000cU) 
                                                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__de) 
                                                            << 0x0000000aU))) 
                                                     | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw) 
                                                        << 1U))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = (0x2a2a1440U 
                                               | (((((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d) 
                                                           << 2U)) 
                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__d)) 
                                                      << 0x0000000bU) 
                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__d) 
                                                        << 9U)) 
                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__d) 
                                                        << 5U) 
                                                       | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__d) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__d) 
                                                             << 1U)))) 
                                                   << 0x00000011U) 
                                                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d) 
                                                       << 0x0000000dU) 
                                                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d) 
                                                         << 0x0000000bU)) 
                                                     | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d) 
                                                          << 7U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                                                            << 5U)) 
                                                        | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__edn_enable_pfa) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.__PVT__u_edn_core__DOT__boot_req_mode_pfa) 
                                                                  << 2U) 
                                                                 | (3U 
                                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_edn_core__DOT__auto_req_mode_pfa)))))))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[2U] = (7U & 
                                               (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d))));
}

VL_ATTR_COLD void Vsim_edn__Az22___ctor_var_reset(Vsim_edn__Az22* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_edn__Az22___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->tl_i, __VscopeHash, 717864233454436411ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tl_o, __VscopeHash, 14475261017617439938ull);
    vlSelf->edn_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11974772451771060959ull);
    VL_SCOPED_RAND_RESET_W(272, vlSelf->edn_o, __VscopeHash, 13445446860602486810ull);
    vlSelf->csrng_cmd_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6188965641353982970ull);
    VL_SCOPED_RAND_RESET_W(135, vlSelf->csrng_cmd_i, __VscopeHash, 9107151271482748874ull);
    vlSelf->alert_rx_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3626835617410658616ull);
    vlSelf->alert_tx_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 268840600036833065ull);
    vlSelf->intr_edn_cmd_req_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10547315952636480316ull);
    vlSelf->intr_edn_fatal_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2448487510615314949ull);
    VL_SCOPED_RAND_RESET_W(67, vlSelf->__PVT__u_reg__DOT__hw2reg, __VscopeHash, 712558370054910035ull);
    vlSelf->__PVT__u_reg__DOT__addrmiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15052309411488334690ull);
    vlSelf->__PVT__u_reg__DOT__wr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226200909601097533ull);
    vlSelf->__PVT__u_reg__DOT__reg_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790086751881178366ull);
    vlSelf->__PVT__u_reg__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17619690520985733277ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_edn_cmd_req_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1594102123686372065ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_state_edn_fatal_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1814392873755928441ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_edn_cmd_req_done__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4549071051946440898ull);
    vlSelf->u_reg__DOT____Vcellout__u_intr_enable_edn_fatal_err__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17096689937502095628ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_edn_enable__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16927227441694118380ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_boot_req_mode__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16242575271959903426ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_auto_req_mode__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13452820421189835099ull);
    vlSelf->u_reg__DOT____Vcellout__u_ctrl_cmd_fifo_rst__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1749528358329818084ull);
    vlSelf->u_reg__DOT____Vcellout__u_boot_ins_cmd__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17815144019719225670ull);
    vlSelf->u_reg__DOT____Vcellout__u_boot_gen_cmd__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15473039560682879640ull);
    vlSelf->__PVT__u_reg__DOT__max_num_reqs_between_reseeds_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7217981610455470678ull);
    vlSelf->u_reg__DOT____Vcellout__u_max_num_reqs_between_reseeds__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5450292926924518294ull);
    vlSelf->__PVT__u_reg__DOT__err_code_test_qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4000317749267541435ull);
    vlSelf->u_reg__DOT____Vcellout__u_err_code_test__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16593522852036894821ull);
    vlSelf->__PVT__u_reg__DOT__addr_hit = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1707141598254270963ull);
    vlSelf->u_reg__DOT____VdfgRegularize_h9be6beb9_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12546410134650901051ull);
    vlSelf->__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4611914375097554809ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4679568390029364162ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6329736833134573906ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696429526636382585ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1706730600893819760ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__d_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6163554174737916675ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18377078999914101879ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982600420356756588ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983886618155008317ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107619224408584717ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11007983825990299790ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16507440504144729486ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12414235150457437157ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4298417715922207639ull);
    vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567638118188061591ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379353910234399301ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2495368717842203422ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 72349039942010968ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16523045317148247929ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 506924183970613026ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6791509159414454062ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6104554933683681027ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9470870701423681363ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_state_edn_fatal_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13365655575897010212ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14815791038779629395ull);
    vlSelf->__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2504560440780371835ull);
    vlSelf->__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15979013713695008658ull);
    vlSelf->__PVT__u_reg__DOT__u_regwen__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11778554508324455078ull);
    vlSelf->__PVT__u_reg__DOT__u_regwen__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17344395894839471107ull);
    vlSelf->__PVT__u_reg__DOT__u_regwen__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15462113598928353538ull);
    vlSelf->__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16625174600004020995ull);
    vlSelf->__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6349214300397152908ull);
    vlSelf->__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12404613401867371297ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6736462223453581630ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2385161633104405772ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_reg_rdy__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15227187663422627486ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15379371592348750273ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_rdy__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1825184049594820883ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10177107857168699471ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_ack__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308073387248500862ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4992464977141761963ull);
    vlSelf->__PVT__u_reg__DOT__u_sw_cmd_sts_cmd_sts__DOT__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11815492862996899975ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 646484168409988926ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_boot_mode__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5386605938314761808ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17954483662067659037ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_auto_mode__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3510219144178897796ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7205163648108776563ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_type__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13463937557474073069ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16132689693725151198ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_ack__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12382289837247351809ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6583389812925416288ull);
    vlSelf->__PVT__u_reg__DOT__u_hw_cmd_sts_cmd_sts__DOT__q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4114734187797132276ull);
    vlSelf->__PVT__u_reg__DOT__u_reseed_cmd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17878164705298084192ull);
    vlSelf->__PVT__u_reg__DOT__u_generate_cmd__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18134499804723607375ull);
    vlSelf->__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9271948791942293098ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823964724892356848ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 699922132858948365ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_enable_field_alert__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5195071650927623163ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9977182370522705362ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14814864372010452745ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_boot_req_mode_field_alert__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6727030933145934850ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554369348280138323ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16699276695547064715ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5369211316245294687ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16361295905210852281ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2946923361460457388ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2765701503099201302ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_cmd_fifo_rst_field_alert__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2321160616239363272ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15678153024185327376ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2770164531395735065ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14711827281959471395ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_edn_bus_cmp_alert__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5520995262250565755ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12342816868598712190ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__qe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14016183960680225836ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 125366257802125214ull);
    vlSelf->__PVT__u_reg__DOT__u_recov_alert_sts_csrng_ack_err__DOT__wr_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12695088942711177339ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4497586398931737952ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_sfifo_rescmd_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1358625006248509616ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4329017008649600023ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_sfifo_gencmd_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12800377838989823316ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15451989869827687730ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_ack_sm_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17841460507941166586ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7281443305032663090ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_main_sm_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11899604905346209695ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17451285911005107509ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_edn_cntr_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2460732799804407571ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2982552915625689160ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_write_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8043900174110942091ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9436892430146660689ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_read_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1215120146369865511ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2296236183820558040ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_fifo_state_err__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16778581424935089917ull);
    vlSelf->__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115879251913840981ull);
    vlSelf->__PVT__u_reg__DOT__u_main_sm_state__DOT__q = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7876302826300390919ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__19__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1515598449528743302ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__18__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14312304109231814443ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12491846167063517513ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107623073369681075ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1373615411223861485ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__14__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9531582706398553958ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__13__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3125749022944227828ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8660851078281174411ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9304773189392747565ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1675614629118415267ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1960263309431228568ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603279338886329606ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8025164794156844611ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4733792307867459694ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11732127019545109267ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13865974431549400716ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 23049203524508978ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721863531725377580ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_fo__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567958912324729620ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14486958376657781924ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6753589971400102055ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_rst_fo__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6162200908249013637ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_req_mode_fo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1205832529972248535ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_enable_pfa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729110183744621432ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_rst_pfa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9642533697547796920ull);
    vlSelf->__PVT__u_edn_core__DOT__auto_req_mode_pfe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14521925490183065069ull);
    vlSelf->__PVT__u_edn_core__DOT__auto_req_mode_pfa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15703575267292847508ull);
    vlSelf->__PVT__u_edn_core__DOT__main_sm_done_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3839817169591501918ull);
    vlSelf->__PVT__u_edn_core__DOT__capt_gencmd_fifo_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9390727466627379864ull);
    vlSelf->__PVT__u_edn_core__DOT__capt_rescmd_fifo_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 890158189316644761ull);
    vlSelf->__PVT__u_edn_core__DOT__send_rescmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6520606297074404921ull);
    vlSelf->__PVT__u_edn_core__DOT__send_gencmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5671818852651173391ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17040573507863154498ull);
    vlSelf->__PVT__u_edn_core__DOT__gencmd_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15784667327295627641ull);
    vlSelf->__PVT__u_edn_core__DOT__rescmd_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7297875852566000636ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_hw_cmd_handshake = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8129948720809046612ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_wr_ins_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7965713487430337768ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_send_ins_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14431195931877866555ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_wr_gen_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13380746244847605679ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_wr_uni_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11137304858944062671ull);
    vlSelf->__PVT__u_edn_core__DOT__sw_cmd_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1268295690108457478ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_req_mode_pfa = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2857948394271136886ull);
    vlSelf->__PVT__u_edn_core__DOT__auto_req_mode_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11663396580126398039ull);
    vlSelf->__PVT__u_edn_core__DOT__accept_sw_cmds_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1640741435183653922ull);
    vlSelf->__PVT__u_edn_core__DOT__packer_ep_clr__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7144132090337969293ull);
    vlSelf->__PVT__u_edn_core__DOT__packer_ep_ack__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14847640551800025644ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__packer_ep_wdata[__Vi0], __VscopeHash, 12692716067745660132ull);
    }
    vlSelf->__PVT__u_edn_core__DOT__packer_ep_rready__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1717747439928150635ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_edn_core__DOT__packer_ep_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 580446443688784471ull);
    }
    vlSelf->__PVT__u_edn_core__DOT__sfifo_rescmd_err_sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1044612414425576851ull);
    vlSelf->__PVT__u_edn_core__DOT__sfifo_gencmd_err_sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1661193309000984671ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_main_sm_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4870614185449731365ull);
    vlSelf->__PVT__u_edn_core__DOT__reject_csrng_entropy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6211749102380550047ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_rdata_capt_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1086504387844443670ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 672123308868217727ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11755621535672348078ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_vld_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14528503850563352977ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_vld_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11338865656413091518ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10641358200426683452ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_out_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 465714045159025188ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_vld_out_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7634377563867779050ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1146864434767218586ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_cmd_req_vld_hold_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3718326915906587353ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_cnt_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2582427401753489514ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_fifo_cnt_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17251331965345627840ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_fips_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10725002003378717169ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_fips_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7037986936092428781ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_fips_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 486392326357523863ull);
    vlSelf->__PVT__u_edn_core__DOT__edn_fips_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5753962092207708129ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_rdata_capt_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4876137698126868045ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_rdata_capt_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11612124796092523130ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_rdata_capt_vld_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13517076786220181561ull);
    vlSelf->__PVT__u_edn_core__DOT__cs_rdata_capt_vld_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10650087535233456975ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_rdy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10753592877271640508ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_rdy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11889100576895678485ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_cmd_sts_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10965464367605344325ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_sw_cmd_ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679886127004108230ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_hw_cmd_ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4030936579201140122ull);
    vlSelf->__PVT__u_edn_core__DOT__csrng_hw_cmd_sts_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11574618879086544479ull);
    vlSelf->__PVT__u_edn_core__DOT__boot_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2740426528024281988ull);
    vlSelf->__PVT__u_edn_core__DOT__auto_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6559950868012505906ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_type_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2766351250123648511ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_reg_rdy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1669878730268014716ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_hdr_busy_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5213662630818791049ull);
    vlSelf->__PVT__u_edn_core__DOT__cmd_hdr_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446919824648188035ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->u_edn_core__DOT____Vcellinp__u_prim_arbiter_ppc_packer_arb__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17207544752312091667ull);
    }
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8170461637672582516ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223844172435551649ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11080993804753710910ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554197587794330062ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14529599688057266205ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507516172286403458ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13894426847308019391ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11808378702599720070ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3952366357332314971ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12463948174804632416ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5025907820287112100ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10482929203130727642ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787992754214331438ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683077739734032833ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1251649658640407020ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 832958091002591954ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2657729505598377257ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1648120725544456972ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546443207013122145ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12022667862201423874ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16944515632583924305ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16844252442539489629ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7075129198734728715ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18012335632973742230ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11118816741467749762ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_sm_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18158176267663046070ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_clr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6819050282342785897ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__fifo_pop_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1683418469472916503ull);
    vlSelf->u_edn_core__DOT____Vcellout__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6254379738620222252ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615961582294982430ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9262805534257199762ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12933909989279273758ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6645095574351188649ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 754310356012139452ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4001179138273507715ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550714301511611613ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4875492550011995021ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13856993160923043153ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3496903584234747598ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_24 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 398997549967393544ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17146065278344327066ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15859023918951110284ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12147569560287196704ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5702015936849247857ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12875580997700807192ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 405625660090142051ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8771225878472220815ull);
    vlSelf->u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15924043582254075692ull);
    vlSelf->__PVT__u_edn_core__DOT__u_intr_hw_edn_cmd_req_done__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6340314877852539726ull);
    vlSelf->__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13013755972263852843ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__d_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10719550579676790382ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_edge_detector_recov_alert__DOT__q_sync_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9985048669655190782ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_mubi4_sync_cmd_fifo_rst__DOT__gen_no_flops__DOT__unused_logic = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17365429446270969512ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11989393435969916025ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255061553000125122ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 761665964419944599ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7469814172355057147ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18391635436837630586ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7072682448124019016ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 11335368459160958087ull);
    vlSelf->u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT____Vlvbound_h3a9eeeb7__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4799891876241943221ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050056637772390450ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14676044524929640792ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1743420061618948859ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5283030145248154009ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18264583596845001754ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7675075860927174140ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8691628765073240571ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1332618967304333196ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 909022121256030879ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 546205425403954501ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5802702139939950172ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2195618024645758306ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3320521863662446670ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7974819480037578659ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2122548042325985046ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15449980749324015629ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7133628925557073608ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3656245493404840180ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_rescmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1402990177695860120ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514349593035129082ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12212442774350167918ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 347125426512790245ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__full_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9528857184830500289ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9102638221000579860ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1043619060579391172ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__under_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6275398618440203708ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__storage, __VscopeHash, 17793073478896641171ull);
    vlSelf->u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT____Vlvbound_h3a9eeeb7__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2154060352076831702ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7909804736599064489ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16851821464766179717ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14784283066212236193ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9637484482094378753ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13910824223062377974ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11908100761077547848ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11621375520381088383ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7505909770536897452ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4484768946209793794ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__clr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8063606967942292025ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3700062782612574670ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 56348116948849574ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18215662985706611098ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10213295969344343418ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1294697575078431828ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14265380314635810486ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12587947385436507073ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14846855216791082119ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_fifo_sync_gencmd__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10823438625292751255ull);
    vlSelf->__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__sw_cmd_req_load_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3206585784789003749ull);
    vlSelf->__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__cmd_sent_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 190854576242564482ull);
    vlSelf->__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9247821062718904387ull);
    vlSelf->__PVT__u_edn_core__DOT__u_edn_main_sm__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9704244567340811733ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15823331403745362799ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__decr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17388552784659674810ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3245982984271184024ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1750383018979381535ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12800764648197595878ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4357362869012860677ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8434944143278891566ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13637866797198340067ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_count_max_reqs_cntr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16607827422132976760ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__req_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15354559740509497033ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__data_i[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 790645762658313396ull);
    }
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gnt_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16535224624059070565ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__idx_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11431037587824963029ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18212245695687003093ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14023283872996845783ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__masked_req = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11211924663524657041ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__ppc_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4462794338568883421ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__arb_req = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14954982719163419541ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6975492772157174649ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__winner = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11932166160618587368ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__gen_nodatapath__DOT__unused_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4845798715543474624ull);
    }
    vlSelf->__PVT__u_edn_core__DOT__u_prim_arbiter_ppc_packer_arb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3273319272112776977ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10454344982180054472ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16251378289253439953ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 325817500704775800ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__depth_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 20028852913872112ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_q, __VscopeHash, 14549620486717426830ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__data_d, __VscopeHash, 16977160730260654756ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8441408936527087947ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7947078395800863925ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973205529957263508ull);
    vlSelf->__PVT__u_edn_core__DOT__u_prim_packer_fifo_cs__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12511808034887071629ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wdata_i, __VscopeHash, 11729856443995484292ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10067962227650568691ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2793565817656503554ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9630669012556696875ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3179975621008048006ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11427203507319346190ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13314329009793216188ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 1434341954031416911ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 712281959415586624ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2673622971593905668ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 7886445362792116373ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2741465830807870170ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4308759840001024686ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15138729239726017277ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__local_escalate_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6425717143433190153ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1244985278765964295ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__0__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11136341854557491510ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6698971681228686100ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9803824415638450659ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2577561236281506030ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 882607608586147289ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18279262393084730512ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10755227003793030601ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 12421270307864382263ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 18419520392195204605ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10658933013839760669ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 15932019727979448965ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4834334732030757337ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17543502534400410136ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10640904584535201246ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9486050077345445660ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__1__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13187189946423979189ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15417811138996238536ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2764354570013879217ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11220653717215627261ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13820396538916987262ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12890362769720449697ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7031069017927111774ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 4275598878564405570ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 15174666180181067553ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17336820362418976442ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 15998645582855247836ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17283665948968953698ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 352133053823072154ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3107932544314529067ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10212485584799540782ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__2__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16917132593551958370ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6671423997921682868ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11299064043664172660ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 224172698554532924ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13475703216502006396ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5411828735879287311ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4915457189677387327ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 15784136518296143110ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 13025171851333930592ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13405881561579676176ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 4852827232420747330ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10802270117120605887ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14606787703087565151ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6167835340236154441ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7634879648400889065ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__3__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6243012638634121556ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10240971652014737924ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216229447298307002ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8386228443235660468ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18346682240143875185ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6782412075084196724ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18407959551267854616ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 12207321115683885962ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 6869142206495228962ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14350219904291034378ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 7180432019384441876ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10969256541251554377ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10782560386233507863ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8992130069963696025ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16811831775805366219ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__4__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17875365527457348563ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778340461073915385ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8633797813532588214ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17202683074481520139ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11923081110067316453ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15005317063262448947ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7434597019318556635ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 8766867781049074974ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 14707295814991190949ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5489635386599720916ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 8608427109437104796ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10261818426353300615ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2148985946126576352ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8461391953977619119ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16508359574241679358ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__5__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9371071302602260444ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074422388246111713ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9830651335652751376ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9273436387011921216ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15528786773855918791ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14840092700601418104ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7832608112930756324ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 8258946657141255968ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 9831761213906549615ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716106988255724763ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 6768737156544707455ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8097281981882408001ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16113083493664041001ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17361073506917083971ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7143087127201264898ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__6__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11273805408148203171ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1616201149363346454ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7154243506427183120ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__load_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14401862624628580686ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clear_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12693480998214316250ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7239221706808938640ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__depth_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2049716836917690533ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_q, __VscopeHash, 13804217894841187663ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__data_d, __VscopeHash, 18225255790250126858ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__clr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13685728785888109125ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__rdata_shifted, __VscopeHash, 11093190792608424475ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__pull_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12464060446105467218ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2748511371855529648ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_prim_packer_fifo_ep__DOT__gen_unpack_mode__DOT__ptr_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13546424355720615568ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__state_d = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 766833848188540905ull);
    vlSelf->__PVT__u_edn_core__DOT__gen_ep_blk__BRA__7__KET____DOT__u_edn_ack_sm_ep__DOT__u_state_regs__DOT__state_raw = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7973605757516544357ull);
    vlSelf->__VdfgRegularize_h4a41a239_1_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5257419377665843898ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__32__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3183219736059619224ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__32__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7378028083799338012ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1390, __VscopeHash, 259888827325509999ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__VdfgRegularize_h6e95ff9d_0_1391, __VscopeHash, 9239526359943854400ull);
}
